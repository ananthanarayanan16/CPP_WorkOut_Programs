// Write a program in C++ to print individual character of a string in reverse orders.

#include<iostream>
#include"string"
using namespace std;
int length(string);   // FUNCTION DECLARE

int main()
{
    int len;
    string str;

    cout<< "Input the string : ";
    getline(cin, str);
    len = length(str);
    cout<< "The character of the string is reverse are: \n";
    for(int i = len; i >= 0; i--)                                 //    REVERSE STRING 
    {
        cout<< str[i] << " ";
    }
    cout<< endl;

    return 0;
}

// FIND LENGTH OF THE STRING
int length(string str)
{
    int count = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    // cout<< "Length is : " << count;
    return count;
}

/*

output : 

Input the string : string
The character of the string is reverse are: 
g n i r t s
 
 */