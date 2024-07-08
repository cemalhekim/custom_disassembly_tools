# Custom End Effector for UR10e Project

## Overview
This project involves the design, manufacture, and programming of a custom end effector parallel gripper for the UR10e robot. The gripper was designed in SolidWorks, 3D printed using PLA on an Original Prusa i3 MK3S+ 3D printer with Prusa Slicer, and programmed with an Arduino Nano and a servo motor. The parallel movement of the gripper is facilitated by a 3D printed spur gear and rack mechanism. This README provides a comprehensive overview of the project, detailing each phase from design to programming, along with the rationale for custom building the gripper and its upgradeability.

## Table of Contents
1. [Design Phase](#design-phase)
2. [Manufacturing Phase](#manufacturing-phase)
3. [Programming Phase](#programming-phase)
4. [Reason for Custom Build](#reason-for-custom-build)
5. [Upgradeability](#upgradeability)
6. [Conclusion](#conclusion)

## Design Phase
The design phase was initiated in SolidWorks, where the custom parallel gripper was meticulously modeled. The gripper consists of the following key components:

- **Base Plate**: The foundation of the gripper, which mounts onto the UR10e robot.
- **Gripper Fingers**: The parts that interact with objects, designed to provide a firm and stable grip.
- **Spur Gear**: Facilitates the parallel movement of the gripper fingers.
- **Rack**: Connected to the fingers and works in conjunction with the spur gear to achieve parallel motion.
- **Servo Mount**: Holds the servo motor in place, ensuring precise movement control.

### Design Considerations
- **Modularity**: The gripper is designed to be modular, allowing for easy upgrades and modifications.
- **Strength and Durability**: Materials and geometry were chosen to ensure that the gripper can withstand the forces encountered during operation.
- **Ease of Manufacturing**: The design was optimized for 3D printing to ensure ease of production and replication.

https://github.com/cemalhekim/custom_end_effector/assets/98236326/c4c0b30a-d247-4683-993e-243f90bc8326

Here the assembly video of the end effector can be seen.

## Manufacturing Phase
The manufacturing phase involved 3D printing the designed components using PLA material on an Original Prusa i3 MK3S+ 3D printer. Prusa Slicer was used to prepare the STL files for printing, ensuring optimal print settings for strength and precision.

### Printing Settings
- **Layer Height**: 0.2 mm
- **Infill Density**: 20% for non-structural parts, 40% for structural parts
- **Print Speed**: 50 mm/s
- **Supports**: Enabled for overhangs

### Assembly
After printing, the components were carefully assembled:
1. The spur gear was attached to the servo motor.
2. The rack was connected to the gripper fingers.
3. The servo motor was mounted onto the base plate.
4. The rack and spur gear mechanism was aligned to ensure smooth parallel movement of the gripper fingers.

## Programming Phase
The gripper's movement is controlled by an Arduino Nano and a servo motor. The Arduino is programmed using the Arduino IDE to receive degree inputs from the terminal, which corresponds to the desired position of the gripper fingers.

### Hardware Components
- **Arduino Nano**: Microcontroller to interface with the servo motor.
- **Servo Motor**: Controls the movement of the gripper fingers via the spur gear and rack mechanism.
- **Power Supply**: Provides necessary power to the Arduino and servo motor.

### Software Implementation
The Arduino code was written to interpret input from the terminal and convert it into corresponding servo motor positions.

###Operation
Initialization: The servo is initialized to the middle position (90 degrees).
Input Handling: The Arduino reads input from the terminal, where the user can input a number between 1 and 9. Each number corresponds to a specific degree (0 to 180) for the servo motor, translating to the gripper's position.

## Reason for Custom Build
The primary reasons for designing and building a custom end effector include:

- **Specific Requirements**: Off-the-shelf grippers may not meet the specific requirements for certain tasks, such as size, gripping force, or range of motion.
- **Cost-Effectiveness**: Custom-built grippers can be more cost-effective compared to commercial solutions.
- **Flexibility and Adaptability**: A custom build allows for flexibility in design and functionality, catering to unique application needs.
- **Learning and Development**: The process of designing, manufacturing, and programming a custom gripper provides valuable learning and development opportunities in robotics and engineering.

##Upgradeability
This gripper design serves as a base platform that can be easily upgraded or modified for various applications. Potential upgrades include:

Tool Attachments: The gripper can be adapted to hold different tools, such as screwdrivers, for specific tasks.
Sensor Integration: Sensors can be added to enhance functionality, such as force sensing or tactile feedback.
Enhanced Actuation: The servo motor can be replaced with more powerful actuators for increased gripping force or speed.
Software Enhancements: The control software can be upgraded to include advanced features like automated object detection and gripping.
Upgrade Example: Screwdriver Attachment
To upgrade the gripper to hold a screwdriver:

Design a screwdriver holder that can be mounted onto the existing gripper fingers.
Modify the software to include a mode for screwdriver operation, controlling the rotation and positioning as required.
Test and calibrate the upgraded gripper to ensure reliable and precise operation.

##Conclusion
This project demonstrates the successful design, manufacture, and programming of a custom parallel gripper for the UR10e robot. The gripper's modular design and ease of upgradeability make it a versatile tool for a variety of applications. By following the steps outlined in this README, you can replicate and modify the gripper to suit your specific needs, providing a foundation for further innovation in robotic end effectors.

