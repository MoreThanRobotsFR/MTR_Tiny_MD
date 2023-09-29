# Code in Progress

This repository contains an Arduino code that is still in progress. The code is designed to control a BLDC (Brushless DC) motor using the SimpleFOC library and a DRV8316 driver. It also utilizes a magnetic sensor for position sensing and an Adafruit NeoPixel for visual feedback.

## Requirements
To run this code, you need the following components:
- Raspberry Pi RP2040 board (or any other Arduino board supported by the SimpleFOC library)
- DRV8316 driver board
- Magnetic sensor (AS5600 I2C)
- Adafruit NeoPixel strip

## Installation
1. Download and install PlatformIO IDE from the [official website](https://platformio.org/install).
2. Open PlatformIO IDE and create a new project.
3. Copy the code from this repository and replace the existing `main.cpp` file in your project with it.
4. Connect your Arduino board to your computer using a USB cable.
5. Open the `platformio.ini` file in your project and select the appropriate board and port under the `[env:your_board_name]` section.
6. Save the `platformio.ini` file.
7. Build and upload the code to your Arduino board using the PlatformIO IDE.

## Usage
1. Connect the DRV8316 driver board and the magnetic sensor to the appropriate pins on your Arduino board. Refer to the comments in the code for the pin assignments.
2. Connect the motor to the DRV8316 driver board.
3. Connect the Adafruit NeoPixel strip to the appropriate pin on your Arduino board. Refer to the comments in the code for the pin assignment.
4. Open the serial monitor in the PlatformIO IDE or use an external serial communication tool, such as Arduino Serial Monitor or PuTTY.
5. Set the baud rate to 115200.
6. Once the code is uploaded and running on your Arduino board, you can use the serial terminal to set the target velocity of the motor. Type "T" followed by the desired velocity and press enter.

## Current Status and Future Development
The code is currently a work in progress and may have bugs or incomplete functionality. The main functionality of controlling the BLDC motor using the SimpleFOC library and the DRV8316 driver is implemented. The code also includes features for monitoring motor variables and displaying the status of the DRV8316 driver using the serial monitor.

Future development plans for this code may include:
- Adding additional functionality, such as position control or torque control.
- Optimizing the code for better performance or efficiency.
- ...and more!

## Note
Please note that this code is still in progress and may not be fully functional or optimized. Use it at your own risk and make sure to test it in a controlled environment before using it in any critical or potentially dangerous applications. Contributions and feedback are welcome to help improve the code.