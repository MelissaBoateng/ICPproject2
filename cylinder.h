#include "square.h"

#include <iostream>

 #include <iomanip>
 using namespace std;

 class cylindricalBlocks: public sqrBaseRectBlocks{

 public:

    cylindricalBlocks (double d, double h)
    {
        int w = d;
        void setdiameter(double d);
        double getdiameter();
        
    }
protected:

    double diameter;
};
