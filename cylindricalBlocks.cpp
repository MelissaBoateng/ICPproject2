//Melissa Boateng Bright Okrah
#include <vector>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>
//#include "sqrBaseRectBlocks.cpp"
using namespace std;
/* cylindrical block class */
class cylindricalBlocks: public sqrBaseRectBlocks{
    private:
        int diameter;
        float surfaceArea;
     public:
        cylindricalBlocks(int w, int h, int l, float area):sqrBaseRectBlocks(w, h, l){
            diameter = w;
            surfaceArea = area;
        }

        int getDiameter(){return diameter;}
        float getsurfaceArea(){return surfaceArea;}
        bool operator< (const cylindricalBlocks& other) const{
            return surfaceArea < other.surfaceArea;
        }
};

//calculate surface area
float calcSurfacearea(int diameter, int height){
    float radius = (float)diameter/2;
    float surfArea = (2 * M_PI * radius * radius) + (2 * M_PI * radius * height);
    return surfArea;
}
//form cylinders from squares
vector<cylindricalBlocks> Cylinders(vector<sqrBaseRectBlocks> squares){
    vector<cylindricalBlocks> cyl;
    for(int i = 0; i < squares.size(); i++){
        cylindricalBlocks cylinders(squares[i].getWidth(), squares[i].getHeight(), squares[i].getLength(), calcSurfacearea(squares[i].getWidth(), squares[i].getHeight()));
        cyl.push_back(cylinders);
    }
    return cyl;
}

//print cylinders
void printCylinders(vector<cylindricalBlocks> cyl){
    cout << "Printing cylinders formed from squares" <<endl;
    for(int i = 0; i < cyl.size(); i++){
        cout << "Width: " << cyl[i].getWidth() <<" Height: " << cyl[i].getHeight() << " Length: " << cyl[i].getLength() << " Diameter: "
        << cyl[i].getDiameter() << " Cylindrical Surface Area: " << cyl[i].getsurfaceArea() << "\n";
    }
}

//sort cylinders in ascending order of their surface area
vector<cylindricalBlocks> sortSurface(vector <cylindricalBlocks> cylinders){
    sort(cylinders.begin(), cylinders.end());
    return cylinders;
}
