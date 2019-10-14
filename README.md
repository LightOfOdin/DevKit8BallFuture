# MXChip DevKit - Magical 8Ball

In this tutorial, you will turn your MXChip into a clairevoyant magical 8Ball. This project aims to hone in C#/C++ skills by:

* Understanding the relationship of the Arduino IDE and MX DevKit
* Learn about the varying sensors onboard; using these sensors to solve problems.

![8Ball Idle Screen](https://lh3.googleusercontent.com/t8KrrHJ21wIo50fv-l-tQbVExPu6gT0A7lwzQ1EUCETs2sPqL6GwJLKZMRINYKkpxZ2U-I1Egd0msE6pylU7Vqv9QJpg0rtcyiYkO-wg6AoiEDjlOSjNrgRYgKdtE1OVMeBzSgBwv_WeCcqw4VxpNA1oOS1IyLZXSOl6Ef3PiKqBJXWKveIdz-_YRTVniCLYsmQ158DLK7JMN0zjSZJ66uCS5mdAL-OYp_S1mDgbWtjvtvqqt3U_-3IKZmucfKqS0-2Hr5DGSz6-rbLLSY1utBlIifryHqQbtrSyltRcvK9ikQUJ71MNbY_XHSSvsrKdUYckZjrA9UN44lEe0lNt0iAZ6_a3UrsNkXhsZWRuci8VTOEU_i_cza3c0TDsSBhabeYsre_BUp7wQriHwsniUQ9K-FqsiKHfIAZVqmPQtSTnLKmBhhgvD0_OM0woWeEfe4accPRJMDbcA9mqNw0ZLEl83HMIy4jGfCZ6g783qAh8UoaNnSDK8rjaykh8ilzhXtvbF2iQe5_SWLrmyJCrJs6DJtzWzSRh5xwIuiMgEdITudhwT6fyztec5cANRECDM9kX7Wwjk8S2TUNxOEGwBsDZcDDOd4hYj_gWgGjXkV0OERct1BujY5PAUmdFjlm8Ed3e63tr5reWB-2U0LIvi-DhiZL-2ctWPpEVxG2JKIpTWtxsHAKDhUI=w746-h1532-no)

> **Notice:** This project is used for Microsoft Codess 2019 Event in Sydney.
    
## About IoT DevKit

The [MXChip IoT DevKit](https://aka.ms/iot-devkit) (a.k.a. IoT DevKit) is an all-in-one Arduino compatible board with rich peripherals and sensors. You can develop for it using [Azure IoT Device Workbench ](https://aka.ms/azure-iot-workbench). And it comes with a growing [projects catalog](https://aka.ms/devkit/project-catalog) to guide you prototype Internet of Things (IoT) solutions that take advantage of Microsoft Azure services.

## Before you begin

To complete the steps in this tutorial, you need to do the following:

* Prepare your DevKit with [Getting Started Guide](https://microsoft.github.io/azure-iot-developer-kit/docs/get-started/).
* Upgrade to latest firmware (>= 1.6.2) with [Firmware Upgrading](https://microsoft.github.io/azure-iot-developer-kit/docs/firmware-upgrading/) tutorial.

## Set up the Environment

### Setting up the Environment.

1. Download or Git Clone ![GitHub Repo.](https://github.com/LightOfOdin/DevKit8BallFuture) to your local drive. 

2. **Click** Open file directory within Visual Studio Code (Rightclick > Open with Visual Studio Code), Azure IoT Extension should automatically detect the IoTProject Workspace. After dependancies are loaded, connect MXChip Devkit(AZ3166) to your computer's USB.

3. Upload code by clicking on the **Upload** button, underneath the Windows' Min, Max and Close buttons OR, Open the command palette and select **Azure IoT Device Workbench: Upload Device Code**.

4. VS Code then starts verifying and uploading the code to your DevKit.

## Test the project

1. Give the device 2 vigorous shakes. 

2. The device will then output your prophecy. There is a 5 second delay, before you can try again.

![8Ball Idle Screen](https://lh3.googleusercontent.com/VTB8ws53NitZPlyyVYZGqLcjnZU5CIoejVJzjp0de7kDtwi3h08BdD3vcB0vBiRTFRwMBWRV5fH-Ze0eHJgx68WvbHYZk6WoCkLAvxFFOjxaexJYz6BWPbG0V4liIbtoc3pGzKhMLAxnPf_zTbJXqu_3jSl6jEXzgc_ynk1jOD9HbZuJrGq1bTb6rGaa7wL7sdRvPZxrsdwbYExum5L71glDRTN28VqW7Dt-OLDvAIsS8IZI0dOq8M6i037n-9jN9RCNfDTcb72V2zfM-RTAmtxYJDtdzT-uUeJBQ1JJ8aX2rWe1jJDg_5bzJcfQ3e8tXR20qo3IV7QcdONNU7KMIBsfYDICpmDUfrhNQhXJZ1pGpYAUaev4yBxxVyoUTtSnir19kesJFULOS-86uVWaM7Eq0eIR799_OXBiHNRslwy93dU3jEoor_XK6C6ZvH7MLVy0lz6nn2yHIp_3igjnrc_VofQaqhGrv9ddXwy4RoW1EMameEZQYHF9El6Alxz5482vVFjzIdtMdLZ1gUD8NQ8e3ZnUX6WyOcGZiBrhckHbeOsHOeZlTWKYGcmgzE-UxD2bFEhPn_CHPcDiC2gnQemBx7Haa3h0-SB8DAUz4ub759XXGgBfUfNCmpAKbB8ReJqJZ--ovesYV80cizoQuPXFGiiO6Zodx88vO75R_8lVvT49lBEBGJc=w746-h1532-no)

3. Try 3 different prophecies, then click on the the reset button found on the DevKit below the Micro USB interface.

4. Try this again and note down your observations. Is this truly random? 

## Coding Exercises

### Creating true random numbers.

In this program, it is imporant for the sequence of generated random numbers by random(), must differ even if we reinitalise the sketch, clicking on the **Reset** button found on the MXChip. In Order to do this, we need to use the randomSeed() fn to initilise the random number generator by using a fairly random input. You need to solve this function of the code. Check below for useful hints.

1. The main elements of intergrating this will be within the **void setup() "& void loop()** functions.

2. Reference the schematic below to understand MXChip inputs. 

3. You are not limited to #DevKitMQTTClient.h headers. We have also intergrated the #arduino.h header. Check the arduino ![documentation](https://www.arduino.cc/reference/en/#page-title) 

## Problems and feedback

If you encounter problems, you can find [FAQs](https://microsoft.github.io/azure-iot-developer-kit/docs/faq/) if you encounter problems or reach out to us from the channels below.

Owner/SME - David Oraha