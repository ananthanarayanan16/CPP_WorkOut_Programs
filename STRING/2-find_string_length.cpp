// Write a program in C++ to find the length of a string without using libarary function.

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    int len = 0;

    cout<< "Input the string : ";
    // cin>> str;
    getline(cin, str);
    for(int i = 0; str[i] !='\0'; i++)
    {
        len++;
    }
    cout<< "Length of the given string : " << len << endl;

    return 0;
}

/*

output :

Input the string : anantha narayanan
Length of the given string : 17

*/