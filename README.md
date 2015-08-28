# Claystruder

<a href="https://www.youtube.com/watch?t=223&v=2klMRvXjjX8"><img src="https://github.com/Digifabturing/Claystruder/blob/master/clayex.JPG?raw=true" width="100%"/></a>

### Introduction:

The Claystruder project is part of the digifabTuring research, that are a research
cluster focused about digital fabrication + robotic automation and material research
applied in the field of architecture, interaction design and art.
digifabTuring rises from a collaboration between several partners: Fablab Torino,
Officine Arduino, Co-de-iT with COMAU and Toolbox Coworking.

We have developed an hybrid extruder system to print clay and other dough, that we use
with a COMAU NJ60 anthropomorphic arm.
The pneumatic system move the clay to the screw conveyor to print the material.

We have developed a Grasshopper definition to, that allow the user to generate the
printing toolpath in a simple way. The definition was created to:
- transform toolpath curves into data to control a 6 axis robot movements
- convert the data to COMAU robot programming language PDL2
- do a raw preliminary check of possible collisions between the robot and
  surrounding objects (basically the work area plane)
- control a clay extruder and simulate its material extrusion path and deposition


### The CODE process:

The Blue part is collecting all the grasshopper settings in order to control the entire process, so please check & set it carefully !!

0. here you move your geometries (toolpath curves) to the robot work area
1. toolpath subdivision: the robot requires points (planes) in order to move. You can set the resolution of its movements adjusting the lenght of the curves subdivisions.
2. retraction: the GH def customizes the height of the movements between different extrusions on the same layer. it's possible also to squeeze a little the material in order to cut it before the next extrusion
3. the GH definition, since is set to control a material extrusion, is set to have the tool working always vertical, but you can change the toolpath planes
4. here you can customize your Robot data: base points and mesh geometry in order to calculate the rotations and simulate the robot movements. Since the IK core is based on the Daniel Piker Lobster Grasshopper definition you can check here the Lobster_IK.pdf document http://www.grasshopper3d.com/group/lobster to properly set your robot data.
5. set the tool offset
6. simulate the tool mesh shape
7. calculate the inverse kinematics in order to get all the single motors rotations for each toolpath points. The IK solver component is the Lobster one developed by Daniel Piker.
8. here you can find two clash controls. The first one is a check of all the 6 axis rotations into the allowed rotation domains of your robot. If some rotation is bigger than the allowed one you will get an error message, its location in the rotations list and you CAN'T save the final file.  The second one is a raw test of the wrist robot position and the work area plane position. if the wrist Z position is under the working area you will get an error message
9. here you can manipulate the robot speed during the extrusion (or whatever work you are doing with it). A specific speed will be assigned to the robot for every specific toolpath point.
10. here you can compose the specific robot code. We are working with a 'COMAU NJ 60' 6 axis robot and its PDL2 programming language but you can customize this part of the code at your specific needs.
11. finally ... you can export your code !! enjoy it


A project of [DigifabTuring](http://digifabturing.tumblr.com/)
Developed by:

  Stefano Paradiso from [FablabTorino](http://fablabtorino.org/)/[Officine Arduino](http://local.arduino.cc/torino/), Andrea Graziano, Bruno Demasi,
  Alessio Erioli, Tommaso Casucci, Michele Semeghini from [Co-de-iT](http://www.co-de-it.com/)

In the definition we are using the Lobster reloaded component to calculate the
Inverse Kinematics, the component was written by [Daniel Piker](http://www.grasshopper3d.com/group/lobster/forum/topics/lobster-reloaded).
