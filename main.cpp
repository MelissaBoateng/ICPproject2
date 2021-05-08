#include <vector>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include "rectBlocks.cpp"
#include "sqrBaseRectBlocks.cpp"
#include "cuboidBlocks.cpp"
#include "cylindricalBlocks.cpp"
#include "sphericalBlocks.cpp"
using namespace std;

/* Main function for all files */
int main(){
    cout << "Tasks A to B"<<endl;
    vector<rectBlocks> rectangles = getDim("dataBlocks.dat");  //read from file into vectors of rectangle objects
    printRectangles(rectangles);  //print all rectangles

    cout << "\n\n";
    vector<sqrBaseRectBlocks> squares = onlySquares(rectangles);  //obtain squares from rectangles and put them into vectors as square objects
    printSquares(squares);  //print all squares

    cout << "\n\n";
    vector<cuboidBlocks> cuboids = onlyCuboids(squares);  //obtain cuboid from squares and put them into vectors as cuboid objects
    printCuboids(cuboids);  //print all cuboids

    cout << "\n\n";
    vector<cylindricalBlocks> cylinders = Cylinders(squares);  //form cylinders from squares, adding the diameter and surphace areas and put them into vector as cylindrical objects
    printCylinders(cylinders);  //print cylindrical blocks

    cout << "\n\n";
    vector<sphericalBlocks> sph = Spheres(cuboids);  //form spheres from cuboids, adding diameter, volume and surface areas and put them into vectors as spherical objects
    cout << "Printing spherical blocks "<<endl;
    printSpheres(sph);  //print spherical blocks

    cout << "\n\n";
    cout <<"Task C" << endl;
    cout <<"Now, print Spherical Blocks sorted in order of ascending order of their diameters\n";
    vector<sphericalBlocks> sorted = sortDiameter(sph); //sort spherical blocks
    printSpheres(sorted);  //print sorted spheres

    cout << "\n\n";
    cout <<"Task D" << endl;
    cout <<"Now, print Cylindrical Blocks sorted in order of ascending order of their Cylindrical surface area\n";
    vector<cylindricalBlocks> sorting = sortSurface(cylinders);
    printCylinders(sorting);




}
