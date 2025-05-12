// Write a C++ program to read temperature in centigrade and display a suitable message according to the temperature state below

#include<iostream>
using namespace std;

int main()
{
    int temp;

    cout<< "Input test data : ";
    cin>> temp;

    if(temp <= 0)
    {
        cout<< "Freezing weather.\n";
    }
    else if(temp >= 0 && temp <= 10)
    {
        cout<< "Very cold weather.\n";
    }
    else if(temp >= 10 && temp <= 20)
    {
        cout<< "Cold weather.\n";
    }
    else if(temp >= 20 && temp <= 30)
    {
        cout<< "Normal in temperature.\n";
    }
    else if(temp >= 30 && temp <= 40)
    {
        cout<< "It's Hot.\n";
    }
    else
    {
        cout<< "It's Very Hot.\n";
    }

    return 0;
}


/*

outputs :

Input test data : 23
Normal in temperature.

Input test data : 43
It's Very Hot.

*/