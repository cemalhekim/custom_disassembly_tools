# Custom End Effector for UR10e Project

## Overview

This project involves the design, manufacturing, and programming of a custom parallel gripper end effector for the UR10e robot. The gripper was designed in SolidWorks, 3D printed using PLA material on an Original Prusa i3 MK3S+ 3D printer, and programmed using an Arduino Nano and a servo motor. The gripper's parallel movement is achieved through a 3D printed spur gear and rack mechanism, which is controlled by the servo motor. This README details each phase of the project: design, manufacturing, and programming, as well as the rationale for a custom build and the potential for future upgrades.

## Design Phase

The custom parallel gripper was designed using SolidWorks, focusing on creating a robust yet simple mechanism that could be easily manufactured and assembled. Key design features include:

- **Parallel Gripper Mechanism**: The gripper uses a parallel motion mechanism to ensure that the fingers move symmetrically, providing a stable and secure grip on objects.
- **Spur Gear and Rack Mechanism**: A 3D printed spur gear, driven by a servo motor, engages with a rack connected to the gripper fingers. This mechanism translates the rotational motion of the servo into linear motion of the gripper fingers.
- **Modular Design**: The gripper was designed with modularity in mind, allowing for easy upgrades and modifications. The base structure can be adapted to accommodate different tools, such as screwdrivers, with minimal changes.

## Manufacturing Phase

The gripper components were manufactured using the following process:

- **3D Printing**: All components were 3D printed using PLA material on an Original Prusa i3 MK3S+ 3D printer. The Prusa Slicer software was used to prepare the STL files for printing.
  - **Materials**: PLA was chosen for its ease of use, strength, and availability.
  - **Printer Settings**: The Prusa i3 MK3S+ was set up with standard settings for PLA, including a layer height of 0.2mm and an infill density of 20%.
  - **Assembly**: After printing, the components were cleaned and assembled. The spur gear was attached to the servo motor, and the rack was connected to the gripper fingers. The entire assembly was then mounted onto the UR10e robot arm.

## Programming Phase

The gripper is controlled using an Arduino Nano, which interfaces with a servo motor to drive the spur gear and rack mechanism. The Arduino code allows for simple control of the gripper through terminal inputs.

- **Arduino Setup**: An Arduino Nano was used for its compact size and versatility.
- **Servo Motor Control**: The servo motor is controlled using the Arduino's PWM output. The code allows the user to input a number between 1 and 9 in the terminal, corresponding to servo positions from 0 to 180 degrees.
- **Code File**: The Arduino code is located at `arduino/servo_control/from_1_to_9_modes.ino` in the repository. The code reads the terminal input and maps the input number to the appropriate servo position.
