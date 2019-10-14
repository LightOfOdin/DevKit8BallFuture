# MXChip DevKit - Magical 8Ball

In this tutorial, you will turn your MXChip into a clairevoyant magical 8Ball. This project aims to hone in by:

* Understanding the relationship of the Arduino IDE and MX DevKit
* Learn about the varying sensors onboard; using these sensors to solve problems.

> **Notice:** This project is used for Microsoft Codess 2019 Event in Sydney.

    ![8Ball Idle Screen](https://lh3.googleusercontent.com/0ydcjBfwTcRPM0wF4_nuzVbPcjVcNREu-pUJE6p_A8FczNKoG4XyO2CLxRG9P9mj_TwRdnrFTT9samZ390dPMc7WXzaBHqOWnWJa4Yz5_O_tCeeDdek3wHUDnS4r8jJmT3552yU_XiGZxYz9rKFZ678uSyCCmNXegCGAbMspQcl88EEk-2NqnHcawZzuqevMbfSTonN3vohswNB1kdsM0akCz9iICHSQMLq7aDUzbryLEe34M0Khhf_pWpFyxVBTaUMoP1gXHgYP0SfJiCgWOdpIe_bPbOyrAUADDINbvP7ZmoWguyI4BrfJV74dzZuy6iaLzHyqTbdADh-kSSsUK-BAEgQroyeli10QF0yehPQfh398V4rLxhTHfakI_DaJ1jslRZWyuGiNI_Bo5pFJTcH7u9NmS1CTUI1VRNeWNjOs7bYJdZG59jCPuWm_LQJwpSr06reRzPoy_n-AWTK4KAJd0uy1XoWJj61_1aau_HFxHV9P4PJH5_Ipaj8RlSH1sw6Eamd_xoeEvMhdNckWbZ4gvHSZKvFMyw2FDZ15k4Qv-7LkZ_wKCrs2vOoZaCqnPzxxI51sOKkq0zFleNbFccWI6GVqH8mw4x3JBp_CO21NQE-kSlv80Y7_UbjkDNJwDAmvaPboaEklZgLvaMB3KwCamJXwdcltwLLxBQEMJdIq-HHHZf5GNAE=w746-h1532-no)

## About IoT DevKit

The [MXChip IoT DevKit](https://aka.ms/iot-devkit) (a.k.a. IoT DevKit) is an all-in-one Arduino compatible board with rich peripherals and sensors. You can develop for it using [Azure IoT Device Workbench ](https://aka.ms/azure-iot-workbench). And it comes with a growing [projects catalog](https://aka.ms/devkit/project-catalog) to guide you prototype Internet of Things (IoT) solutions that take advantage of Microsoft Azure services.

## Before you begin

To complete the steps in this tutorial, you need to do the following:

* Prepare your DevKit with [Getting Started Guide](https://microsoft.github.io/azure-iot-developer-kit/docs/get-started/).
* Upgrade to latest firmware (>= 1.6.2) with [Firmware Upgrading](https://microsoft.github.io/azure-iot-developer-kit/docs/firmware-upgrading/) tutorial.

## Set up the Environment

### Setting up the Environment.

1. Download or Git Clone ![GitHub Repo.](https://github.com/LightOfOdin/DevKit8BallFuture) to your local drive. 

2. **Click** Open file directory within Visual Studio Code, Azure IoT Extension should automatically detect IoTProject Workspace. After dependancies are load, connect MXChip Devkit(AZ3166) to your computer's USB.

3. Upload code by clicking on the **Upload** button, underneath the Windows' Min, Max and Close buttons OR, Open the command palette and select **Azure IoT Device Workbench: Upload Device Code**.

4. VS Code then starts verifying and uploading the code to your DevKit.

## Test the project

1. Give the device 2 vigorous shakes. 

2. The device will then prompt you with a prophecy. There is a 5 second delay, before you can try again.

3. Try 3 different prophecies, then click on the the reset button found on the DevKit below the Micro USB interface.

4. Try this again and note down your observations. Is this truly random? 

## Coding Exercises

### Creating true random

The dictionary language can also be changed. The URL in the function app (named string url) can be changed to a variety of languages, documented [Supported languages](https://developer.oxforddictionaries.com/documentation/languages)

## Problems and feedback

If you encounter problems, you can find [FAQs](https://microsoft.github.io/azure-iot-developer-kit/docs/faq/) if you encounter problems or reach out to us from the channels below.
