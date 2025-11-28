---
title: Appendix
nav_order: 6
layout: default
---
## A. Extending Robot Actuator Type Comparison
In order to complete the challenge, the soft actuator must be able perform two actuation modes: extending/retracting and bending [6]. Our first design of the crawling robot utilises a kirigami inspired actuator, but we also considered a PneuNet soft actuator [7]. We compare these two actuators types in the decision matrix below. 

<p align="center">
<!-- 1. Use {{ site.baseurl }} to correctly build the path. -->
<!-- 2. Use forward slashes (/) for web paths, not backslashes (). -->
<!-- 3. Use the renamed file without spaces or ampersands. -->
<img src="{{ site.baseurl }}/assets/images/FiguresA.png" style="max-width: 60%; height: auto;">
</p>
<p align="center">
Decision matrix comparing kirigami and PneuNet actuators for crawling robot</p>

By comparing the both actuators in the decision matrix above, we conclude that the kirigami actuator is best suited for our purpose due to its flexibility, low cost, quick response, and ability to perform large deformations.

## B. Kirigami Actuator Design 
The kirigami actuator we created had two main air channels to control actuator movement, allowing for 3 actuation modes: extending/contracting, bending right, and bending left

<p align="center">
<!-- 1. Use {{ site.baseurl }} to correctly build the path. -->
<!-- 2. Use forward slashes (/) for web paths, not backslashes (). -->
<!-- 3. Use the renamed file without spaces or ampersands. -->
<img src="{{ site.baseurl }}/assets/images/FiguresB.png" style="max-width: 50%; height: auto;">
</p>
<p align="center">
Model of kirigami actuator
</p>

The actuator is fabricated using a FDM 3D printer using TPU 85A. This material was used for making this actuator since it provides a deformation profile without leaving permanent tear/strain [8]. As stated earlier, however, the result consisted of lots of pores, making the actuator highly inefficient.

## C. Expanding Balloon Actuator Design
In order for the robot to remain stationary in the pipe while the kirigami actuator expands and contracts, we opted for the expanding design below. It would follow similar logic to double-balloon enteroscopy [9]. 

<p align="center">
<!-- 1. Use {{ site.baseurl }} to correctly build the path. -->
<!-- 2. Use forward slashes (/) for web paths, not backslashes (). -->
<!-- 3. Use the renamed file without spaces or ampersands. -->
<img src="{{ site.baseurl }}/assets/images/FiguresC.png" style="max-width: 50%; height: auto;">
</p>
<p align="center">
Mold for single bellow actuator
</p>

We opted for a single bellow actuator with a single peak that expands radially. We wanted the actuator to grip the pipe sequentially for our robot to move. 

<p align="center">
<!-- 1. Use {{ site.baseurl }} to correctly build the path. -->
<!-- 2. Use forward slashes (/) for web paths, not backslashes (). -->
<!-- 3. Use the renamed file without spaces or ampersands. -->
<img src="{{ site.baseurl }}/assets/images/Figuresbody.png" style="max-width: 50%; height: auto;">
</p>
<p align="center">
Body Design
</p>

There are 2 of these bodies where the kirigami actuator is attached at the centre. The slot was made for the bellow actuator to sit. The gripper design we went through 4 different iterations. We started with 2 versions clamping gripper to scooping gripper and finally decided on a suction gripper approach.

## D. Expanding Bellow Actuator Fabrication Process

We attempted to fabricate a bellow actuator using silicone we bought from a local arts and craft store. We designed and made the mold using a 3D printer.
Items used for fabricating our bellow actuator include the following:
-          Silicone Resin A and B
-          Cups
-          Spoon
-          3D-printed Mold
-          Paper


<p align="center">
<!-- 1. Use {{ site.baseurl }} to correctly build the path. -->
<!-- 2. Use forward slashes (/) for web paths, not backslashes (). -->
<!-- 3. Use the renamed file without spaces or ampersands. -->
<img src="{{ site.baseurl }}/assets/images/process1.png" style="max-width: 50%; height: auto;">
</p>
<p align="center">
Fabrication process
</p>


After mixing and pouring the silicone mixture into our mold, we waited for 1 hour until it fully cured.

<p align="center">
<!-- 1. Use {{ site.baseurl }} to correctly build the path. -->
<!-- 2. Use forward slashes (/) for web paths, not backslashes (). -->
<!-- 3. Use the renamed file without spaces or ampersands. -->
<img src="{{ site.baseurl }}/assets/images/process2.png" style="max-width: 50%; height: auto;">
</p>
<p align="center">
Bellow actuator testing
</p>

Afterwards, we connected the bottom and the top silicone together using more of the silicone mixture. 
While testing the actuator with the pump setup, we observed air leaking from the actuator itself. We believe the leakage could be a result of the removal process from the mold. 
We concluded that the silicone mixture we were using was not viable for our project.

## E. Design Iteration

<p align="center">
<!-- 1. Use {{ site.baseurl }} to correctly build the path. -->
<!-- 2. Use forward slashes (/) for web paths, not backslashes (). -->
<!-- 3. Use the renamed file without spaces or ampersands. -->
<img src="{{ site.baseurl }}/assets/images/iteration1.png" style="max-width: 50%; height: auto;">
</p>
<p align="center">
Different end cap design iteration
</p>

<p align="center">
<!-- 1. Use {{ site.baseurl }} to correctly build the path. -->
<!-- 2. Use forward slashes (/) for web paths, not backslashes (). -->
<!-- 3. Use the renamed file without spaces or ampersands. -->
<img src="{{ site.baseurl }}/assets/images/iteration2.png" style="max-width: 50%; height: auto;">
</p>
<p align="center">
Different design iterations of the growing robot.
</p>

### Retraction Mechanism Concept
During the development, a winding mechanism was considered to retract back the robot after grabbing the ball. A string is tied between the inner tip of the robot and the winder on the mechanism. An electric motor attached to the spinner to wind back the string and retracts back the robot.

<p align="center">
<!-- 1. Use {{ site.baseurl }} to correctly build the path. -->
<!-- 2. Use forward slashes (/) for web paths, not backslashes (). -->
<!-- 3. Use the renamed file without spaces or ampersands. -->
<img src="{{ site.baseurl }}/assets/images/iteration3.png" style="max-width: 50%; height: auto;">
</p>
<p align="center">
retraction winder mechanism
</p>

### F. Arduino Code

This appendix links to the code on the Arduino. To control the main airflow to the expanding actuator a servo motor can be attached to the air supply manual valve. The servo can then be controlled using a potentiometer. The code also contains functions for controlling 4 possible valves and toggling the air supply pump for the bending actuators. These, however, are not dynamically used in the current version as they are controlled manually using a button and switch on the breadboard.

The code is available [here](/SoftRobotCode.ino)
