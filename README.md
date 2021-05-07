# ICPproject2
Melissa Boateng and Bright Okrah

The dimensions of wooden blocks are given in a data file, dataBlocks.dat and gives for each block
the width (W) and height (H) of its base and the length (L) of the block. The problem is simply
to read these blocks and store them first as an array of blocks of rectangular objects of a class
rectBlocks().
From the class of rectangular blocks, there are some whose base width equals the base height
(i.e., W = H). Call these the square base rectangles, sqrBaseRectBlocks(). Generate an array of
only the blocks with square bases as a derived class of rectBlocks().
From the class of sqrBaseRectBlock(), two other classes may be derived; one with W = H =
L, call this the cuboidBlocks() and another, formed as cylindrical blocks, where the square base is
formed into a circle with diameter the same as the width or height of the square base. Call these
objects of the cylindricalBlocks() class.
From the objects of the cuboidBlocks() class, we now derive spherical objects, sphericalBlocks(),
whose diameters equal the width, height or length of the respective cuboid objects they are derived
from. 

This project showcases the idea of classes and iheritance in c++ using shapes. 
We made use of pointers and vectors. 
To run the code, clone the rectblock.h file , implementation file and the filereaddata including datablock.dat 
