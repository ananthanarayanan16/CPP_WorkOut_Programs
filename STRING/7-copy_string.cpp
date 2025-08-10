// Write a program in C++ to copy a string to another string.

#include"iostream"
#include"string"
using namespace std;
int length(string);

int main()
{
    string str_1, str_2;
    int len, i;

    cout<< "Input the string : ";
    getline(cin, str_1);
    cout<< "The first string is : " << str_1 << endl;
    len = length(str_1);
    str_2.resize(len);
    for(i = 0; i <= len; i++)
    {
        str_2[i] = str_1[i];
    }
    cout<< "The second string is : " << str_2 << endl;
    cout<< "Number of characters copied : " << i << endl;

    return 0;
}

// FIND LENGTH OF STRING 
int length(string str)
{
    int count = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

/*

output :

Input the string : Jarvis
The first string is : Jarvis
The second string is : Jarvis
Number of characters copied : 7

*/