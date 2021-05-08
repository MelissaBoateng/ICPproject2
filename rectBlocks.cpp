#include <vector>
#include <fstream>
#include <iostream>
#include <stdio.h>
using namespace std;
/* Rectangle Class */
class rectBlocks{
    private:
        int width;
        int height;
        int length;


    public:
        rectBlocks(int w, int h, int l){
            width = w;
            height = h;
            length = l;
        }

        int getWidth(){return width;}
        int getHeight(){return height;}
        int getLength(){return length;}

};

/* Reads dimensions from file */
vector<rectBlocks> getDim(string filename){
    vector<rectBlocks> dimensions;
    ifstream read(filename);               //reads the provided filename from user
    if(!read){                                      //file not found
    cerr << "Sorry, file not in directory." << endl;
    }
    while(!read.eof()){
        string w; string h; string l;
        while(read >> w >> h >> l){               //read each line and store width, height and length
            int width = stoi(w);
            int height = stoi(h);
            int length = stoi(l);
            rectBlocks rectangle(width, height, length);
            dimensions.push_back(rectangle);
        }
    }
    return dimensions;
}

//print rectabgular objects
void printRectangles(vector<rectBlocks>& rects){
    cout << "Printing all Rectangles" << "\n";
    for(int i = 0; i < rects.size(); i++){
        cout << "Width: " << rects[i].getWidth() << " Height: "<< rects[i].getHeight() <<" Length: " << rects[i].getLength() << "\n";
    }
}




