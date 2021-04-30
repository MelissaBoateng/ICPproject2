// Rectangle.cpp file
#include <iostream> // As we need to print data
#include <fstream>
#include <sstream>
#include "rectangle.h" // The header file for the class - we need this!

using namespace std;



//Default constructor
rectBlocks::rectBlocks(){
	width = 1;
	height = 1;
	lenght = 1;
}//Rectangle()

// Constructor to create a new rectangle with the given values
rectBlocks::rectBlocks(int w, int h, int l)
{
	if (w > 0)
		width = w; // don't need {}s if there is only one line in the body
	else
		width = 1;

	if (h > 0){
		height = h; 
	} else{
		height = 1;
	}
	if (l > 0){
		lenght = l; 
	} else{
		lenght = 1;
	}
}//Rectangle(int, int)

// Setters that change the values of the attributes
void rectBlocks::setWidth(int w)
{
	if (w > 0)
		width = w;
	else
		width = 1;
}//setWidth

void rectBlocks::setHeight(int h)
{
	if (h > 0)
		height = h;
	else
		height = 1;
}//setHeight

void rectBlocks::setLenght(int l)
{
	if (l > 0)
		lenght = l;
	else
		lenght = 1;
}//

// Getters that return information about the rectangle
int rectBlocks::getWidth() const
{
	return width;
}//getWidth

int rectBlocks::getHeight() const{
	return height;
}//getHeight

int rectBlocks::getLength() const	
{
	return lenght;
}//getlenght

// Display method that prints the rectangle's height and width
void rectBlocks::displayRectangle() const
{
	cout << endl << "width = " << getWidth();
	cout << ", height = " << getHeight() << endl;
	cout << endl << "length = " << getLenght();
}//displayRectangle
void readBlockDateaFromFile();

int main()
{
fstream  inputfile;
std::string line;
{
 inputfile.open("datablock.dat", ios::in);



while (std::getline(inputfile, line)) {
    std::istringstream iss(line);
    std::string token;
    while (std::getline(iss, token))
    {

        int w = atoi(token.c_str());

    


        std::getline(iss, token);
        int h = atoi(token.c_str());
        //std::strcpy(l, token.c_str());


        std::getline(iss, token);
        int l = atoi(token.c_str());
        store.add(w,h,l);

    }

}
	  
  }
}
// End of the implementation file
