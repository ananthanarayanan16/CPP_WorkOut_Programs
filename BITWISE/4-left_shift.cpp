// Bitwise left shift '<<' operators

#include<iostream>
using namespace std;

int main()
{
    int x, y;

    cout<< "Enter two numbers : ";
    cin>> x>> y;
    cout<< "x = " << x << " y = " << y;
    x = x << y;
    cout<< "\nx = " << x;
    y = 2;
    cout<< "\nif y = " << y;
    x = x << y;
    cout<< "\nx = " << x;
    y = 3;
    cout<< "\nif y = " << y;
    x <<= y;
    cout<< "\nx = " << x;

    return 0;
}

/* 
output :

Enter two numbers : 10 1
x = 10 y = 1
x = 20

if y = 2
x = 80

if y = 3
x = 640

*/