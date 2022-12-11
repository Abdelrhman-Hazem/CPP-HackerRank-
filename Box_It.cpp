#include<bits/stdc++.h>

using namespace std;
//Implement the class Box 
class Box{ 
    //l,b,h are integers representing the dimensions of the box
    int l,b,h;
    // The class should have the following functions : 
    public:
        // Constructors: 
        // Box();
        // Box(int,int,int);
        // Box(Box);
        Box(){l=b=h=0;}
        Box(int len, int bread, int hei){l=len; b=bread; h=hei;}
        Box(Box &bx){l=bx.l;    b=bx.b;     h=bx.h;}
        // int getLength(); // Return box's length
        int getLength(){return l;}
        // int getBreadth (); // Return box's breadth
        int getBreadth() {return b;}
        // int getHeight ();  //Return box's height
        int getHeight () {return h;}
        // long long CalculateVolume(); // Return the volume of the box
        long long CalculateVolume(){return (long long)l*(long long)b*(long long)h;}
        //Overload operator < as specified
        //bool operator<(Box& b)
        bool operator < (Box& bx){
            if (l<bx.l) return 1;
            if (l==bx.l && b<bx.b) return 1;
            if (l==bx.l && b==bx.b && h<bx.h) return 1;
            return 0;
        }       
};
//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
ostream& operator << (ostream& out, Box& bx){
    out<<bx.getLength()<<" "<<bx.getBreadth()<<" "<<bx.getHeight();
    return out;
}


