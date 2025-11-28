---
title: Methods
nav_order: 2
layout: default
---

## 2.1 Concept Evaluation
During the prototyping stage of our project, we developed several ideas for locomotion and ball collection. Described below are the two main ideas we explored.

## 2.2 Crawling Robot - Prototype 1

<p align="center">
<!-- 1. Use {{ site.baseurl }} to correctly build the path. -->
<!-- 2. Use forward slashes (/) for web paths, not backslashes (). -->
<!-- 3. Use the renamed file without spaces or ampersands. -->
<img src="{{ site.baseurl }}/assets/images/Figures2and3.png" style="max-width: 60%; height: auto;">
</p>
<p align="center">
Figures 2 & 3: Crawling robot model (with different end-effectors)
</p>

## 2.2.1 Locomotion and mechanism
For our first design, we took inspiration from crawling robots[3]. In this design, we aimed to create a soft fluidic bellow-shaped crawling robot. Our vision was to create a worm-like robot that consists of the following:
- Two rigid bodies equipped with balloon actuators (purple) for gripping against the tube walls
- A Kirigami actuator (blue) in the middle for locomotion and turning
- A soft gripper (or claw) as our end-effector to collect and hold onto the ball

The plan was for the robot to move in stages. For the first stage, the balloon actuator at the end corner body expands and grips the pipe. Then, the kirigami actuator extends, the balloon actuator’s grip forcing a forward extension. When the actuator reaches the desired extension, the frontmost actuator grips the pipe wall. The actuator at the end of the body and the kirigami actuator deflate simultaneously hence the kirigami actuator returns to its original phase and retracts the back body forwards. This creates forward motion. The return trip backward follows the same process, but starts with the front bellow actuator being activated first and gripping the pipe, causing the kirigami to extend in the negative direction thus creating backwards locomotion.

<p align="center">
<!-- 1. Use {{ site.baseurl }} to correctly build the path. -->
<!-- 2. Use forward slashes (/) for web paths, not backslashes (). -->
<!-- 3. Use the renamed file without spaces or ampersands. -->
<img src="{{ site.baseurl }}/assets/images/Figures4.png" style="max-width: 50%; height: auto;">
</p>
<p align="center">
Figure 4: Sketch of crawling robot’s phases of locomotion
</p>

The left and right steering motion comes from one channel in the kirigami actuator having a positive pressure and the other channel having a negative pressure thus creating a bending motion. Coupling this with the forward/backward motion, the robot would be able to navigate the bends.

Fabrication of the Kirigami and balloon actuators were attempted (elaborated in Appendix A), but due to fluidic leakage in the Kirigami and balloon actuators, we decided to pivot to a new design.

## 2.3 Growing Robot - Prototype 2
Our second idea was based on the design of growing robots[4]. In this design, we would attach our end effector and steering system to the end of a long tube. With fluidic input, the tube would expand into the pipes and, with our steering system, navigate through the course.

Figure 5 shows the initial sketch for our end effector design for our growing robot. Inside the tube would be a guiding roller, and the end effector cap would fit onto the base loosely enough to allow the tube to slip between as it expands. Finally, the suction gripper would attach to the cap to allow for ball retrieval.

<p align="center">
<!-- 1. Use {{ site.baseurl }} to correctly build the path. -->
<!-- 2. Use forward slashes (/) for web paths, not backslashes (). -->
<!-- 3. Use the renamed file without spaces or ampersands. -->
<img src="{{ site.baseurl }}/assets/images/Figures5and6.png" style="max-width: 60%; height: auto;">
</p>
<p align="center">
Figures 5 & 6: Initial sketch and prototype of the growing robot
</p>

Note: while the above sketch depicts a Kirigami actuator used in turning of the end-effector, this was never implemented due to the issues that stemmed during Prototype 1. It was instead replaced with other steering mechanisms described below.

## 2.3.1 Guiding Roller 
Taking reference and inspiration from the Stanford CHARM Lab’s design[5] for a tip mount of a soft growing robot, we designed the base for the guiding roller as shown below, which is responsible for smooth growing and contraction of the robot. It is located on the inside of the growing tube, with the non-expanded portion of the tube feeding through the center hole.

<p align="center">
<!-- 1. Use {{ site.baseurl }} to correctly build the path. -->
<!-- 2. Use forward slashes (/) for web paths, not backslashes (). -->
<!-- 3. Use the renamed file without spaces or ampersands. -->
<img src="{{ site.baseurl }}/assets/images/Figures7and8.png" style="max-width: 50%; height: auto;">
</p>
<p align="center">
Figures 7 & 8: Guiding roller - CAD model and final piece
</p>

Key features of the guiding roller include the following:
- Base: just wide enough to fit the diameter of the expanded tube, with a hole in the center allowing the tube to feed through as it expands
- Magnet “seats” to house disc-shaped magnets. These magnets attach to those on the cap, allowing the base to maintain contact with the - end-effector. Ideally, the magnets would be strong enough to stay attached, but weak enough for the plastic to flow freely
- Wheel mounts: simple extrusions on the base for the wheels
- Wheels: reduces friction, allowing the plastic tube to slip by

## 2.3.2 End-effector (Outer cap)
Design of roller and outer cap: should have enough clearance to let plastic roll and expand
Feeding of plastic inside the box: similar effect; should be smooth to let plastic expand and roll, else it would cause ruptures

## 2.3.3 Locomotion
Input fluidic pressure needs to be balanced, as it must flow freely between the magnets but not disconnect the base roller and end-effector or rupture the plastic

## 2.3.4 Steering System
Throughout our fabrication process, we tested several steering mechanism designs to find the optimal mechanism based on our sizing constraints.

## 2.3.4.1 Mechanism 1: Tape bellows actuator
Tape Bellow fluidic actuator fabricated using duct tape and cardboard for added stability. Bellows expand with fluidic input, turning the tip of the tube, thus directing the robot’s direction within the pipes. During testing, the actuator was effective in turning the robot, but was ultimately too large for the tube’s diameter.

## 2.3.4.2 Mechanism 2: Single pouch actuator
Single pouch actuator fabricated using plastic tubes formed in pouch shape. This idea stems from research[6] which shows how pouch actuator can be utilised for bending motion. Another criteria why we tested this idea is due the design's simplicity and relatively easy to fabricate.After a few rounds of testing we realised that the design is not suitable for our constraints shown by its limited degree of turning.

<p align="center">
<!-- 1. Use {{ site.baseurl }} to correctly build the path. -->
<!-- 2. Use forward slashes (/) for web paths, not backslashes (). -->
<!-- 3. Use the renamed file without spaces or ampersands. -->
<img src="{{ site.baseurl }}/assets/images/Figures9and10.png" style="max-width: 50%; height: auto;">
</p>
<p align="center">
Figures 9 and 10: Tape bellow and single pouch actuator prototype
</p>

## 2.3.4.3 Mechanism 3: Fabric welding pouch actuator (Pouch series actuator)
Looking at the single pouch actuator bending performance, a series of pouch actuators welded together[6] was considered. The actuator was made using pva plastic tube on a soldering router.

<p align="center">
<!-- 1. Use {{ site.baseurl }} to correctly build the path. -->
<!-- 2. Use forward slashes (/) for web paths, not backslashes (). -->
<!-- 3. Use the renamed file without spaces or ampersands. -->
<img src="{{ site.baseurl }}/assets/images/Figures11and12.png" style="max-width: 70%; height: auto;">
</p>
<p align="center">
Figures 11 & 12: Pouch series actuator - dxf file design and the actual part
</p>

Unlike the single pouch actuator, the pouch series actuator has a very poor bending angle. The underlying reason might be due to the air channel being too wide resulting in a very small bending which is not suitable for our sizing constraints.

## 2.3.4.4 Mechanism 4: Silicone bellows actuator

## 2.3.4.4.1 Pressurised (positive pressure)
Silicone bellows actuators were produced using Dragonskin 10 slow silicone and placed side-by-side inside the air tube. When one actuator is pressurised it increases in length, thus turning the front of the robot. A button and a 2-way switch were installed on a breadboard to steer the robot. The button turns on and off the pressure to the bellow. The switch controls which bellow is connected to the pump by controlling a valve.

<p align="center">
<!-- 1. Use {{ site.baseurl }} to correctly build the path. -->
<!-- 2. Use forward slashes (/) for web paths, not backslashes (). -->
<!-- 3. Use the renamed file without spaces or ampersands. -->
<img src="{{ site.baseurl }}/assets/images/Figures13and14.png" style="max-width: 60%; height: auto;">
</p>
<p align="center">
Figures 13 & 14: Molded bellow actuator and the circuit diagram
</p>

## 2.3.4.4.2 Depressurised (negative pressure)
After our trial with the positive pressure bellow actuator, we found out that negative pressure is more desirable. One pain point we found with the positive pressure actuator is the pressure build up on the bellow could result in rupture which is not desirable. The best way of controlling the actuator bending’s is to use negative pressure. The non-existence of pressure build up eliminates the previously mentioned pain point. Fig 15 represents the bending due to negative pressure.

## 2.4 Ball Retrieval System (End-Effector)
We decided to keep our ball retrieval system mechanically simple in order to minimize the end effector’s footprint. This allows for more flexibility and prevents jamming.
Our first idea was a claw gripper that begins naturally contracted and extends with fluidic input. This would, in theory, maintain a small footprint and would not be reliant on maintaining air pressure. In the modeling stage, however, we realized that this design would still be too big to maneuver through the turns.
Our second idea was a suction gripper. In this design, we simply attach a small silicone bellows tube to the end of our robot. By applying a vacuum-type pressure, we effectively suction onto the ball at the end and pull it back. Our main concern was maintaining the required pressure to hold the ball, but while testing the suction gripper we found that the vacuum provided by our compressor was sufficient. 

<p align="center">
<!-- 1. Use {{ site.baseurl }} to correctly build the path. -->
<!-- 2. Use forward slashes (/) for web paths, not backslashes (). -->
<!-- 3. Use the renamed file without spaces or ampersands. -->
<img src="{{ site.baseurl }}/assets/images/Figures15-17.png" style="max-width: 70%; height: auto;">
</p>
<p align="center">
Figure 15 - 17: Final end effector with negative pressure bending, Claw gripper CAD model, and suction gripper
</p>
