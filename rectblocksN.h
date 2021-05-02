#ifndef rectblocksN_H
#define rectblocksN_H
#include "rectblocksN.h"
#include <iostream>
#include <vector>

using namespace std;

// Base class
class rectBlocks
{
public: //everything that follows is public
	//Default constructor
	rectBlocks(); //the default constructor has no parameters
	// Constructor to create a new rectangle with the given values
	rectBlocks(int w, int h); 
	
	// Setters that change the values of the attributes
	void setWidth(int w);
	//void setLenght(int l);
	void setHeight(int h);
	
	// Getters that return information about the rectangle, note the const at the end of the method
	// this guarantees that the method cannot alter the member variables
	int getWidth() const;
	//int getLenght() const;
	int getHeight() const;
	
		
	
	// Display method that prints the rectangle's height,length and width
	void displayRectangle() const;

private: //everything that follows is private and cannot be "seen" from outside the class
	
	int width;
	int length;
	int height;
	
	
}; //Rectangle - note the ";" - don't forget it!
// End of the header file
#endif
