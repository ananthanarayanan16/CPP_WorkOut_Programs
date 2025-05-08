// Write a C++ program to accept a coordinate points in an XY coordinate system and determine in which quardrant the coordinates points lies.

#include"iostream"
using namespace std;

int main()
{
    int x, y;

    cout<< "Enter x and y value : ";
    cin>> x >> y;

    if((x > 0) && (y > 0))
    {
        cout<< "The coordinate points " << x << " " << y << " lies in the first quadrant.\n";
    }
    else if((x < 0) && (y > 0))
    {
        cout<< "The coordinate points " << x << " " << y << " lies in the second quadrant.\n";
    }
    else if((x < 0) && (y < 0))
    {
        cout<< "The coordinate points " << x << " " << y << " lies in the third quadrant.\n";
    }
    else
    {
        cout<< "The coordinate points " << x << " " << y << "lies in the fourth quadrant.\n";
    }

    return 0;
}


/*
outputs :

Enter x and y value : 2 2
The coordinate points 2 2 lies in the first quadrant.

Enter x and y value : -2 3
The coordinate points -2 3 lies in the second quadrant.

Enter x and y value : -3 -5
The coordinate points -3 -5 lies in the third quadrant.

Enter x and y value : 3 -5
The coordinate points 3 -5lies in the fourth quadrant.
*/