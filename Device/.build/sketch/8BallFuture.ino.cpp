#line 1 "c:\\Users\\t-daorah\\Documents\\IoTWorkbenchProjects\\projects\\8BallFuture\\Device\\8BallFuture.ino"
#include "DevKitMQTTClient.h"
#include "LSM6DSLSensor.h"
#include "Arduino.h"

//variable for generating random number (to use as a seed) for hasShake
long randNumber;

//init sensors
DevI2C *i2c;
LSM6DSLSensor *sensor;

//init step variables for changing from idle state to hasShake (Telling Future).
int steps = 0;
static int state = 0; //idle state

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


//Main Idle
#line 42 "c:\\Users\\t-daorah\\Documents\\IoTWorkbenchProjects\\projects\\8BallFuture\\Device\\8BallFuture.ino"
static void enterIdleState();
#line 51 "c:\\Users\\t-daorah\\Documents\\IoTWorkbenchProjects\\projects\\8BallFuture\\Device\\8BallFuture.ino"
bool hasShake();
#line 63 "c:\\Users\\t-daorah\\Documents\\IoTWorkbenchProjects\\projects\\8BallFuture\\Device\\8BallFuture.ino"
void setup();
#line 76 "c:\\Users\\t-daorah\\Documents\\IoTWorkbenchProjects\\projects\\8BallFuture\\Device\\8BallFuture.ino"
void loop();
#line 42 "c:\\Users\\t-daorah\\Documents\\IoTWorkbenchProjects\\projects\\8BallFuture\\Device\\8BallFuture.ino"
static void enterIdleState() {
  state = 0;
  Screen.clean();
  Screen.print("Magic 8Ball");
  Screen.print(1, "Shake to find");
  Screen.print(2, "your future...");
}


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

//Initialising sensor variables, enabling fn' and setting sensitivity of Pedometre for the hasShake function
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

void loop() {
  if (hasShake()) {
    Screen.clean();
    randNumber = random(20);
    Screen.print(1, futures[randNumber], true);
    delay(5000);
    sensor->resetStepCounter();
  } 
  if (state == 0) {
    return;
  }

  if (state == 1) {
    enterIdleState();
  }

}

