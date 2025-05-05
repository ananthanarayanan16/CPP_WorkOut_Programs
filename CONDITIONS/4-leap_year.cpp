// write a CPP program to find whether a give year is a leap year or not.

#include<iostream>
using namespace std;

int main()
{
    int year;

    cout<< "Enter Year : ";
    cin>> year;

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout<< "The give year is leap year.\n";
    }
    // else if(year % 100 == 0 && year % 400 != 0)
    // {
        // cout<< "The given year is not leap year.\n";
    // }
    else
    {
        cout<< "The given year is not leap year.\n";
    }

    return 0;
}

/*
outputs :

Enter Year : 2000
The give year is leap year.

Enter Year : 1900
The given year is not leap year.
*/