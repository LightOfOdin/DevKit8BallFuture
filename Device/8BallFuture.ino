#include "DevKitMQTTClient.h"
#include "LSM6DSLSensor.h"
#include "Arduino.h"

//variable for generating random number (to use as a seed) for hasShake. Initialising a seed variable to select a 
long randNumber;

//init sensors
DevI2C *i2c; // a helper class that provides functions for ic2 Communication the various sensors.
LSM6DSLSensor *sensor; //This is the abstract class of the IMU, selects the various sensors relating to gyro and Accelerometer.

//init step variables for changing from idle state to hasShake (Telling Future).
int steps = 0;
static int state = 0; // state = 0 is an idle state (enterIdleState).
                      // state = 1 is returned to change state to hasShake and will read out the future.

//setting empty array to contain possible futures in string format.
static char *futures[] = {
  "It is certain.",
  "It is decidedly so.",
  "Without a doubt.",
  "Yes - definitely.",
  "You may rely on it.",
  "As I see it, yes.",
  "Most likely.",
  "Outlook good.",
  "Yes.",
  "Signs point to yes.",
  "Reply hazy, try again.",
  "Ask again later.",
  "Better not tell you now.",
  "Cannot predict now.",
  "Concentrate and ask again.",
  "Don't count on it.",
  "My reply is no.",
  "My sources say no.",
  "Outlook not so good.",
  "Very doubtful."
};

//This is the main screen to prompt the user to shake for their future
static void enterIdleState() {
  state = 0;
  Screen.clean();
  Screen.print("Magic 8Ball");
  Screen.print(1, "Shake to find");
  Screen.print(2, "your future...");
}

// Returns true, by checking pedometre is more than or equal to 2. Means a the state hasShake(n).
bool hasShake() {
  steps = 0;
  sensor->getStepCounter(&steps);
  if (steps >= 2) {
    state = 1;
    return true;
  } else {
    return false;
  }
}

/** 
 * A serial connection is Initialied with a 9600 hz clock speed, for the gyroscope and Accelerometer sensor.
 * i2c variable holds the pinModes (Physical pin connections for the Accelerometer and Gyroscope).
 * These are then parsed into a sensor variable that points-to the pins serial connection.
 * As the sensor variable is holding the gyroscope funcion. The Pedameter function is enabled referencing
 * enablePedometer based on the gyroscope construct.
 * Within the pedometer, the sensor's registrable threshold is set to register for a mid to low velosity/shake.
 * check https://microsoft.github.io/azure-iot-developer-kit/docs/apis/lsm6dsl/ for more infomation.
 **/

void setup() {
  Serial.begin(9600);
  i2c = new DevI2C(D14, D15);
  sensor = new LSM6DSLSensor(*i2c, D4, D5);
  sensor->init(NULL);
  sensor->enableGyroscope();
  sensor->enableAccelerator();
  sensor->enablePedometer();
  sensor->setPedometerThreshold(LSM6DSL_PEDOMETER_THRESHOLD_MID_LOW);
  randomSeed(analogRead(A3));
  enterIdleState();
}

/**The main code loop runs here. 
 * If hasShake is true, picks a random number of 20, the 20 indexes of the futures[] array.
 * Before outputted, runs through the randNumber variable to allow randomSeed generation.
**/

void loop() {
  if (hasShake()) {
    Screen.clean();
    randNumber = random(20);
    Screen.print(1, futures[randNumber], true);
    delay(5000); // displays future for 5 seconds
    sensor->resetStepCounter();
  } 
  if (state == 0) {
    return;
  }

  if (state == 1) {
    enterIdleState();
  }

}
