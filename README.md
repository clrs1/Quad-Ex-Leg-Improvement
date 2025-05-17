# Quad-Ex-Leg-Improvement
This repository contains the Fusion 360 design, sliced print files, and test setup for the Quad-Ex leg improvements (Prototyping May 2025). The improvements focus on reducing play by adding side pockets and extra bearings to the original design. Below a description how to assemble the Quad-Ex.

Design folder:
- Fusion 360 design, sliced print files, and 3D-printing settings.
- Note that the hole for the servo arm horns must be created before printing the servo arm, as it is not yet included in the sliced print file.

Test set up: 
- The test for a single leg was done with two servomotors using two separate Arduino MEGA 2560 (image and code provided).
- If a 6x AA battery holder is available, the test set up with the Arduino UNO R3 with KS0470 Keyestudio servo shield for two servomotors is recommended.
    - KS0470 Keyestudio servo shield: https://wiki.keyestudio.com/KS0470_Keyestudio_4WD_BT_Robot_Car_V2.0_Kit_for_Arduino
    - Tutorial test set up:  https://www.youtube.com/watch?v=TkA2LJctU1c

Assembly leg:

To assemble the remaining 3 legs with the improved design, the parts must
 be printed and supports removed. This is most easily done with a box cutter.
 For the 2 legs on the opposite side of the Quad-Ex, the designs must be flipped
 before printing to ensure they are properly mirrored.
 
 Bearings with an inner diameter of 3 mm, an outer diameter of 10 mm, and
 a length of 4 mm must be fitted in each of the 9 side pockets. The screws
 and bolts are each 3 mm in diameter. Side pockets of 6.3 x 2.4 mm were added to the design, where a nut of
 2-mm in length must be inserted into the hole before a bolt can be added. It is
 important to add small metal disks between every point where there would be
 plastic on plastic contact as this reduces deformation and mechanical play.
