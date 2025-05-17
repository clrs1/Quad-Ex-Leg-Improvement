# Quad-Ex-Leg-Improvement
This repository contains the Fusion 360 design, sliced print files, and test setup for the Quad-Ex leg improvements (Prototyping May 2025). The improvements focus on reducing play by adding side pockets and extra bearings to the original design.

Design folder:
- Fusion 360 design, sliced print files, and print settings.
- Note that the hole for the servo arm horns must be created before printing the servo arm, as it is not yet included in the sliced print file.

Test set up: 
- The test for a single leg was done with two servomotors using two separate Arduino MEGA 2560 (image and code provided).
- If a 6x AA battery holder is available, the test set up with the Arduino UNO R3 with KS0470 Keyestudio servo shield for two servomotors is recommended.
    - KS0470 Keyestudio servo shield: https://wiki.keyestudio.com/KS0470_Keyestudio_4WD_BT_Robot_Car_V2.0_Kit_for_Arduino
    - Tutorial test set up:  https://www.youtube.com/watch?v=TkA2LJctU1c
