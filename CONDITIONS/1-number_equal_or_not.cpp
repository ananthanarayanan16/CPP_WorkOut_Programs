// Write a CPP program to accept two integer and check whether they are equal or not.

#include<iostream>
using namespace std;

int main()
{
    int num_1, num_2;

    cout<< "Enter Number 1 : ";
    cin>> num_1;
    cout<< "Enter Number 2 : ";
    cin>> num_2;

    if(num_1 == num_2)
    {
        cout<< "The two numbers 1 and number 2 are equal.\n";
    }
    else
    {
        cout<< "The two numbers 1 and number 2 are not equal.\n";
    }

    return 0;
}


/*

output 1:

Enter Number 1 : 12
Enter Number 2 : 12
The two numbers 1 and number 2 are equal.

output 2 :

Enter Number 1 : 12
Enter Number 2 : 13
The two numbers 1 and number 2 are not equal.

*/