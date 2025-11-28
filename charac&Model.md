---
title: Characterisation and Mathematical Model
nav_order: 3
layout: default
---
## 3.1 Key factors that affect growing
## 3.1.1 Pressure
The main body consists of a growing plastic sheath actuated by air pressure. Through rigorous qualitative trial-and-error, we obtained an optimum pressure that was enough for the main body to grow smoothly without overcoming the magnetic strength between the inner roller and the end effector, thus preventing their separation (Fig 18). We also ensured that the pressure input does not rupture the plastic during the expansion and growing. Optimum pressure: 20 PSI

<p align="center">
<!-- 1. Use {{ site.baseurl }} to correctly build the path. -->
<!-- 2. Use forward slashes (/) for web paths, not backslashes (). -->
<!-- 3. Use the renamed file without spaces or ampersands. -->
<img src="{{ site.baseurl }}/assets/images/Figures18.png" style="max-width: 60%; height: auto;">
</p>
<p align="center">
Figure 18: Separation of guiding roller and outer cap (Technical challenge)
</p>

## 3.1.2 Magnetic strength
This factor is not a controllable factor since we cannot adjust it to our specific needs. Nevertheless we ensured that the strength was neither too weak for the inner roller to be separated from the end effector, nor too strong so that it restricted the plastic feeding for the growth.
## 3.1.3 Design of the roller and end effector
This was to ensure there was enough clearance between the guiding roller and end cap, allowing the plastic to expand while it was constantly fed into the roller.
## 3.1.4 Plastic feeding from our pressure chamber
We ensured the pressure chamber was fully sealed and able to feed the plastic smoothly at the opening with no jamming. Steps taken to control this included applying lubricant and coiling up the plastic in the chamber such that the opening would not get clogged.
## 3.2 Mathematical pressure-driven model for growing

<p align="center">
<!-- 1. Use {{ site.baseurl }} to correctly build the path. -->
<!-- 2. Use forward slashes (/) for web paths, not backslashes (). -->
<!-- 3. Use the renamed file without spaces or ampersands. -->
<img src="{{ site.baseurl }}/assets/images/Figures19and20.png" style="max-width: 60%; height: auto;">
</p>
<p align="center">
Figures 19 and 20: testing and results of expansion rate of growing robot
</p>

<p align="center">
<!-- 1. Use {{ site.baseurl }} to correctly build the path. -->
<!-- 2. Use forward slashes (/) for web paths, not backslashes (). -->
<!-- 3. Use the renamed file without spaces or ampersands. -->
<img src="{{ site.baseurl }}/assets/images/eq1.png" style="max-width: 70%; height: auto;">
</p>

Where as:
- V is the expansion rate of our robot
- Y is the pressure (PSI)
- X is the time (seconds)

We derived this expansion rate over a fixed distance of 0.47 m (measurement of the pipe). On the other hand, the pressure-time equation is derived from the best fit line of Fig 20, which measured the growth rate of our robot between 5 to 20 PSI. We observed an affine relationship between the input pressure and the expansion time in seconds (Eq-1). We rearranged the equation to make x (seconds) our target variable (Eq-2). We were then able to derive the expansion rate by dividing it by the fixed distance (Eq-3). The second condition represents the rupture hence the expansion rate is 0 (Eq-4).

## 3.2.1 Bending Angle Repeatability Test
The repeatability test was conducted for 5 trials under a constant pressure of 20 psi. From our test, we attained a coefficient variation difference of 7.8%.

<p align="center">
<!-- 1. Use {{ site.baseurl }} to correctly build the path. -->
<!-- 2. Use forward slashes (/) for web paths, not backslashes (). -->
<!-- 3. Use the renamed file without spaces or ampersands. -->
<img src="{{ site.baseurl }}/assets/images/Figures21.png" style="max-width: 60%; height: auto;">
</p>
<p align="center">
Figure 21: Bending angle repeatability test results
</p>
Based on the variation coefficient difference, we can conclude that the robot has a good repeatability.

## 3.2.2 Bending Angle mathematical model
Let A be the area of the bellows actuator and k be the stiffness of the bellows actuator. k can be obtained by conducting an experiment where we increase the vacuum pressure incrementally and measure the change in L (∆L). We then proceed to compute the force (F) using ∆L and A. Plot F vs ∆L and obtain the slope, which is the stiffness k.

<p align="center">
<!-- 1. Use {{ site.baseurl }} to correctly build the path. -->
<!-- 2. Use forward slashes (/) for web paths, not backslashes (). -->
<!-- 3. Use the renamed file without spaces or ampersands. -->
<img src="{{ site.baseurl }}/assets/images/eq2.png" style="max-width: 60%; height: auto;">
</p>

Let w be the width of the bellow actuator, L0 be the original bellows actuator length, and Ø be the bending angle. Assuming the condition where one side is compressed resulted in length change due to vacuum pressure, while the other side length remains:

 <p align="center">
<!-- 1. Use {{ site.baseurl }} to correctly build the path. -->
<!-- 2. Use forward slashes (/) for web paths, not backslashes (). -->
<!-- 3. Use the renamed file without spaces or ampersands. -->
<img src="{{ site.baseurl }}/assets/images/eq3.png" style="max-width: 60%; height: auto;">
</p>

By substituting equation 5 and 6 into equation 10 we can get the final bending angle expression:

 <p align="center">
<!-- 1. Use {{ site.baseurl }} to correctly build the path. -->
<!-- 2. Use forward slashes (/) for web paths, not backslashes (). -->
<!-- 3. Use the renamed file without spaces or ampersands. -->
<img src="{{ site.baseurl }}/assets/images/eq4.png" style="max-width: 55%; height: auto;">
</p>

## 3.2.3 Ball suction load test
The ball suction load test was performed by incrementally increasing the load until failure. We tested the strength of our suction actuator by gradually pulling the load, increasing the load until the suction detached. We were able to determine a range for its capability by the set notation (429.54 - 464.38]. This describes our suction capability where it is able to hold weights up to 429.54g but fails at 464.38g. Hence its maximum suction load is within that range.

<p align="center">
<!-- 1. Use {{ site.baseurl }} to correctly build the path. -->
<!-- 2. Use forward slashes (/) for web paths, not backslashes (). -->
<!-- 3. Use the renamed file without spaces or ampersands. -->
<img src="{{ site.baseurl }}/assets/images/Figures22-24.png" style="max-width: 60%; height: auto;">
</p>
<p align="center">
Figures 22 - 24: Load testing for suction gripper
</p>

Due to its range of capability we have chosen a piecewise constant model as its mathematical model where K is the constant suction strength (N)  provided and x is the weight applied. 

 <p align="center">
<!-- 1. Use {{ site.baseurl }} to correctly build the path. -->
<!-- 2. Use forward slashes (/) for web paths, not backslashes (). -->
<!-- 3. Use the renamed file without spaces or ampersands. -->
<img src="{{ site.baseurl }}/assets/images/eq5.png" style="max-width: 55%; height: auto;">
</p>

The suction actuator is able to output a constant suction strength of K (N). The second condition in the piecewise may or may not hold as we do not know the exact weight where failure occurs within the range 429.54  x<464.38 . Conditions 1 and 3, however, definitely hold.