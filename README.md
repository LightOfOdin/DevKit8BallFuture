# MXChip DevKit - Magical 8Ball

In this tutorial, you will turn your MXChip into a clairevoyant magical 8Ball. This project aims to hone in C#/C++ skills by:

* Understanding the relationship of the Arduino IDE and MX DevKit
* Learn about the varying sensors onboard; using these sensors to solve problems.

> **Notice:** This project is used for Microsoft Codess 2019 Event in Sydney.
    
## About IoT DevKit

The [MXChip IoT DevKit](https://aka.ms/iot-devkit) (a.k.a. IoT DevKit) is an all-in-one Arduino compatible board with rich peripherals and sensors. You can develop using [Azure IoT Device Workbench ](https://aka.ms/azure-iot-workbench). It comes with a growing [projects catalog](https://aka.ms/devkit/project-catalog) to guide your prototypes for Internet of Things (IoT) solutions that take advantage of Microsoft Azure services.

## Before you begin

To complete the steps in this tutorial, you need to do the following:

* Prepare your DevKit with [Getting Started Guide](https://microsoft.github.io/azure-iot-developer-kit/docs/get-started/).
* Upgrade to latest firmware (>= 1.6.2) with [Firmware Upgrading](https://microsoft.github.io/azure-iot-developer-kit/docs/firmware-upgrading/) tutorial.

## Set up the Environment

### Setting up the Environment.

1. Download or Git Clone [GitHub Repo.](https://github.com/LightOfOdin/DevKit8BallFuture) to your local drive. 

2. **Click** Open file directory within Visual Studio Code (Rightclick > Open with Visual Studio Code), Azure IoT Extension should automatically detect the IoTProject Workspace. After dependancies are loaded, connect MXChip Devkit(AZ3166) to your computer's USB.

3. Upload code by clicking on the **Upload** button, underneath the Windows' Min, Max and Close buttons OR, Open the command palette and select **Azure IoT Device Workbench: Upload Device Code**.

4. VS Code then starts verifying and uploading the code to your DevKit.

## Test the project

1. Give the device 2 vigorous shakes. 

2. The device will then output your prophecy. There is a 5 second delay, before you can try again.

![8Ball Idle Screen](/screenshots/IoT1.jpg)

3. Try 3 different prophecies, then click on the the reset button found on the DevKit below the Micro USB interface.

4. Try this again and note down your observations. Is this truly a random output? 

## Coding Exercises

### Creating true random numbers.

In this program, it is important for the sequence of generated random numbers by random(), must differ even if we reinitalise the sketch, clicking on the **Reset** button found on the MXChip. In Order to do this, we need to use the randomSeed() function to initilise the random number generator by using a fairly random input. You need to solve this function of the code. Check below for useful hints.

1. The main elements of intergrating this will be within the **void setup() "& void loop()** functions.

2. Reference the schematic below to understand MXChip inputs. 

![MX Chip Schematic by Jeremy Lindsay](/screenshots/IoT2.png)

3. You are not limited to #DevKitMQTTClient.h headers. We have also intergrated the #arduino.h header. Check the arduino [documentation](https://www.arduino.cc/reference/en/#page-title) 

## Problems and feedback    

If you encounter problems, you can find [FAQs](https://microsoft.github.io/azure-iot-developer-kit/docs/faq/) if you encounter problems or reach out to us from the channels below.

Owner/SME - David Oraha
