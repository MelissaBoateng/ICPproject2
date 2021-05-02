// Rectangle.cpp file
#include <iostream> // As we need to print data
#include <fstream>
#include <sstream>
#include "rectblocksN.h" // The header file for the class

using namespace std;

/* 
 * Now follows each of the method implementations.  The <class>:: that precedes each method identifies
 * that the function belongs to the class.  If it is omitted the compiler will attempt to create a separate
 * function, which may or may not be successful.
 */

//Default constructor
rectBlocks::rectBlocks(){
	width = 1;
	//lenght = 1;
	height = 1;
	
}//Rectangle()

// Constructor to create a new rectangle with the given values
rectBlocks::rectBlocks(int w, int h) //, int l)
{
	if (w > 0)
		width = w; // don't need {}s if there is only one line in the body
	else
		width = 1;

	//if (l > 0){
		//lenght = l; 
	//} else{
		//lenght = 1;
	//}
	if (h > 0){
		height = h; 
	} else{
		height = 1;
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

//void rectBlocks::setLenght(int l)
//{
	//if (l > 0)
		//lenght = l;
	//else
		//lenght = 1;
//}//

void rectBlocks::setHeight(int h)
{
	if (h > 0)
		height = h;
	else
		height = 1;
}//setHeight



// Getters that return information about the rectangle
int rectBlocks::getWidth() const
{
	return width;
}//getWidth

//int rectBlocks::getLenght() const{	
	//return lenght;
//}

int rectBlocks::getHeight() const{
	return height;
}//getHeight

//getlenght

// Display method that prints the rectangle's height and width
void rectBlocks::displayRectangle() const
{
	cout << endl << "width = " << getWidth();
	cout << endl << "length = " << getLength();
	cout << ", height = " << getHeight() << endl;
	
}//displayRectangle
void readBlockDataFromFile(vector<rectBlocks> &displayRectangle){//vector<rectBlocks> &displayRectangle);

//int main()

fstream  inputfile;
std::string line;
{
 inputfile.open("datablock.dat", ios::out | ios::in);
 std::string token ;


while (std::getline(inputfile, line)) {
    std::istringstream iss(line);
    std::string token;
    while (std::getline(iss, token, ','))
    {

        int w = (atoi(token.c_str()));

    


        std::getline(iss, token, ',');
        int l = (atoi(token.c_str()));
        //std::strcpy(l, token.c_str());


        std::getline(iss, token, ',');
		int h = (atoi(token.c_str()));
        

    }

}
inputfile.close() ; 
  }

}
// End of the implementation file
