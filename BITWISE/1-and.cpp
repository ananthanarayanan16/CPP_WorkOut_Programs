// Bitwise AND '&' operators.

#include"iostream"
using namespace std;

int main()
{
    int x, y;

    cout<< "Enter Two Numbers : ";
    cin>> x >> y;

    x = x & y;
    cout<< "Output of x & y is : " << x;

    return 0;
}

/*
outputs :

Enter Two Numbers : 10
3
Output of x & y is : 2

Enter Two Numbers : 12
5
Output of x & y is : 4

*/