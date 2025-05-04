// Write a CPP program to check whether a given number is positive or negative.

#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<< "Enter a number : ";
    cin>> num;

    if(num == 0)
    {
        cout<< num << " is not positive or negative integer.\n";
    }
    else if(num > 0)
    {
        cout<< num << " is positive integer.\n";
    }
    else
    {
        cout<< num << " is negative integer.\n";
    }

    return 0;
}

/*
output 1:

Enter a number : 12
12 is positive integer.

output 2:

Enter a number : -12
-12 is negative integer.

output 3:

Enter a number : 0
0 is not positive or negative integer.
*/