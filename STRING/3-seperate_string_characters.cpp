// Write a program in C++ to seperate indiviual characters from a string.

#include<iostream>
#include"string"
using namespace std;

int main()
{
    string str;

    cout<< "Input the string : ";
    getline(cin, str);
    cout<< "The characters of the string are : \n";
    for(int i = 0; str[i] != '\0'; i++)
    {
        cout<< str[i] << " ";
    }
    cout<< endl;

    return 0;
}

/*

output :

Input the string : Anantha Narayanan
The characters of the string are : 
A n a n t h a   N a r a y a n a n 

*/