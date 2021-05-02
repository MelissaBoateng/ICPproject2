#ifndef rectblocksN_H
#define rectblocksN_H
#include "rectblocksN.h"
#include <iostream>
#include "rectblocks.h"
 
using namespace std;

//derived class for square
class  sqrBaseRectBlocks:public rectBlocks
{
public:
    sqrBaseRectBlocks( ): rectBlocks( ){
        //no code
    }
   
    sqrBaseRectBlocks(int side): rectBlocks( side, side){
        //already initialized members
    }

    char const * name() const{
        return "sqrBaseRectBlocks";
    }

void setSide(double side){
      /*
      use Rectangle's setLength() and setWidth() functions, 
      to set both length and width to same value
      */
      rectBlocks::setWidth(side); 
      rectBlocks::setHeight(side);
   }
   //override Rectangle's set function for proper Square behavior
   void setWidth(int w){
      setSide(w);
   }
   //override Rectangle's set function for proper Square behavior
   void setHeight(int h){
      setSide(h);
   }   
   //get function
   int  getSide() const{
      //use Rectangle's getLength() function
      return getWidth();
   }
};

#endif
