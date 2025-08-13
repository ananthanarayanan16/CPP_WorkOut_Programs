// Write a program in C++ to sort a string array in ascending order.

#include"iostream"
#include"string"
using namespace std;

int main()
{
    string str;
    char swap;

    cout<< "Input a string : ";
    getline(cin, str);
    for(int i = 0; str[i] != '\0'; i++)
    {
        for(int j = i+1; str[j] != '\0'; j++)
        {
            if(str[i] > str[j])
            {
                swap = str[i];
                str[i] = str[j];
                str[j] = swap;
            }
        }
    }
    cout<< "The sorted string is : " << str << endl;

    return 0;
}

/*

output :

Input a string : jarvis
The sorted string is : aijrsv

*/