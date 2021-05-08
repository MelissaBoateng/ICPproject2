//Melissa Boateng Bright Okrah
#include <vector>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>
//#include "cuboidBlocks.cpp"
using namespace std;
/* sphere class */
class sphericalBlocks: public cuboidBlocks{
    private:
        int diameter;
        float volume;
        float surfaceArea;
     public:
        sphericalBlocks(int w, int h, int l, float vol, float surf):cuboidBlocks(w, h, l){
            volume = vol;
            surfaceArea = surf;
            diameter = h;
        }
        float getDiameter(){return diameter;}
        float getVolume(){return volume;}
        float getsurfArea(){return surfaceArea;}
        bool operator< (const sphericalBlocks& other) const{
            return diameter < other.diameter;
        }
};

//calcu;ate sphere volume
float volumeSpheres(int diameter){
    float radius = (diameter)/2;
    float volume = (4 * M_PI * radius * radius * radius)/3;
    return volume;
}

//claculate sphere surface area
float surfaceArea(int diameter){
    float radius = (float)diameter/2;
    float area = 4 * M_PI * radius * radius;
    return area;
}

//form spheres from cuboids
vector<sphericalBlocks> Spheres(vector<cuboidBlocks>& cuboids){
    vector<sphericalBlocks> sphereBlocks;
    for(int i=0; i < cuboids.size(); i++){
        sphericalBlocks sph(cuboids[i].getWidth(), cuboids[i].getHeight(), cuboids[i].getLength(), volumeSpheres(cuboids[i].getHeight()), surfaceArea(cuboids[i].getHeight()));
        sphereBlocks.push_back(sph);
    }
    return sphereBlocks;
}

//print spheres
void printSpheres(vector<sphericalBlocks> spheres){
    for(int i = 0; i < spheres.size(); i++){
        cout << "Width: "<< spheres[i].getWidth() << "  Height: "<< spheres[i].getHeight() <<"  Length: " << spheres[i].getLength() << "    Diameter: "
        << spheres[i].getDiameter() << "  Volume: " << spheres[i].getVolume() <<" Spherical Surface area: "
        << spheres[i].getsurfArea() <<endl;;
    }
}

//sort spheres in ascending order of their diameters
vector<sphericalBlocks> sortDiameter(vector <sphericalBlocks> spheres){
    sort(spheres.begin(), spheres.end());
    return spheres;
}
