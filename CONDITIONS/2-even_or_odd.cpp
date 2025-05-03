// Write a CPP program to check whether the give number is even or odd

#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<< "Enter a number : ";
    cin>> num;

    
    if(num == 0)
    {
        cout<< num << " is not odd and even integer.\n";
    }
    else if(num % 2 == 0)
    {
        cout<< num << " is even number\n";
    }
    else
    {
        cout<< num << " is odd number.\n";
    }

    return 0;
}

/*
output 1:

Enter a number : 13
13 is odd number.

output 2:

Enter a number : 2
2 is even number

output 3:

Enter a number : 0
0 is not odd and even integer.
*/