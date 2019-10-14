# MXChip DevKit - Magical 8Ball

In this tutorial, you will turn your MXChip into a clairevoyant magical 8Ball. This project aims to hone in:

* Understanding the relationship of the Arduino IDE and MX DevKit
* Learn about the varying sensors onboard; using these sensors to solve problems.

> **Notice:** This project is used for Microsoft Codess 2019 Event in Sydney.

## About IoT DevKit

The [MXChip IoT DevKit](https://aka.ms/iot-devkit) (a.k.a. IoT DevKit) is an all-in-one Arduino compatible board with rich peripherals and sensors. You can develop for it using [Azure IoT Device Workbench ](https://aka.ms/azure-iot-workbench). And it comes with a growing [projects catalog](https://aka.ms/devkit/project-catalog) to guide you prototype Internet of Things (IoT) solutions that take advantage of Microsoft Azure services.


## Before you begin

To complete the steps in this tutorial, you need to do the following:

* Prepare your DevKit with [Getting Started Guide](https://microsoft.github.io/azure-iot-developer-kit/docs/get-started/).
* Upgrade to latest firmware (>= 1.6.2) with [Firmware Upgrading](https://microsoft.github.io/azure-iot-developer-kit/docs/firmware-upgrading/) tutorial.

## Set up the Environment

### Setting up the Azure Environment (Bing Speech API)

1. Log in to the [Azure portal](https://portal.azure.com/).

1. Create a new Speech Service by searching **Speech** in Azure portal and click **Create**. 

    ![Create Bing Speech API](screenshots/create-BingSpeechAPI.png)

1. Provide the information including **Name**, **Location**, **Price Tier** and click **Create**. Wait for the deployment to finish and pin it to your dashboard for easy access.

1. Once the Speech Service was created, navigate to its main page. Click **Keys**. Copy KEY 1 and we will use it in the later session.

    ![Copy Bing Speech API key1](screenshots/copy-BingSpeechAPI-key1.png)



1. Open the command palette and select **Azure IoT Device Workbench: Upload Device Code**.

   ![IoT Device Workbench: Device -> Upload](screenshots/iot-workbench-device-upload.png)

1. VS Code then starts verifying and uploading the code to your DevKit. 

## Test the project

1. Press and hold the A button while saying the word. The recording time is 2 seconds. 

1. Release Button A to stop recording. Wait for the request to be processed.

1. The definition of the word will appear on the screen. Press button B to scroll the definition. 

1. To start another quest, press A and say another word.

## Coding Exercises

### Changing Dictionary Language

The dictionary language can also be changed. The URL in the function app (named string url) can be changed to a variety of languages, documented [Supported languages](https://developer.oxforddictionaries.com/documentation/languages)

### Changing Dictionary Type

[API Documentation](https://developer.oxforddictionaries.com/documentation) shows how to call each API and other functions provided by Oxford Dictionaries.
These include translations, synonyms (Thesaurus) and other functionalities. 


## Problems and feedback

If you encounter problems, you can find [FAQs](https://microsoft.github.io/azure-iot-developer-kit/docs/faq/) if you encounter problems or reach out to us from the channels below.
