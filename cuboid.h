
#include "square.h"

using namespace std;

class cuboid: public sqrBaseRectBlocks{


public :
    cuboid (int l=0, int w=0, int h=0);

    void setLength(int);
    int getLength() const;
protected:

    int Length;
};
