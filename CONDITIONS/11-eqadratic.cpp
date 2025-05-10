// Write a C++ program to calculate the root of a quadratic equation.

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a, b, c, x1, x2, y1, y2;

    cout<< "Enter the values for a, b and c : ";
    cin>> a>> b>> c;

    y1 = (b * b) - (4 * a * c);
    
    if(y1 > 0)
    {
        y2 = sqrt(y1);
        x1 = (-b + y2) / 2 * a;
        x2 = (-b - y2) / 2 * a;

        cout<< x1 << " " << x2 << endl;
    }
    else
    {
        cout<< "Root are imaginary.\n" << "No solution.\n";
    }

    return 0;
}

/* 
outputs : 

Enter the values for a, b and c : 1 2 3
Root are imaginary. 
No solution.

Enter the values for a, b and c : 1 5 6
-2 -3
*/