// Bitwise OR '|' operator

#include"iostream"
using namespace std;

int main()
{
    int x, y;

    cout<< "Enter two numbers : ";
    cin>> x >> y;
    x |= y;
    // x = x| y;
    cout<< "Output of x | y is : " << x;

    return 0;
}

/*
outputs :

Enter two numbers : 10 3
Output of x | y is : 11

Enter two numbers : 12 5
Output of x | y is : 13

*/