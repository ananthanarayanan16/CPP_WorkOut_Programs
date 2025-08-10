// Write a program in C++ to count total number of alphabets, digits and special characters in a string.

#include"iostream"
#include"string"
using namespace std;
// FUNCTIONS DECLERATION    
int alphabets(string);
int digits(string);
int special_characters(string);

int main()
{
    string str;

    cout<< "Input the string : ";
    getline(cin, str);
    cout<< "Number of alphabets in a string is : " << alphabets(str) << endl;
    cout<< "Number of digits in a string is : " << digits(str) << endl;
    cout<< "Number of special characters in a string is : " << special_characters(str) << endl;

    return 0;
}

// COUNT ALPHABETS
int alphabets(string str)
{
    int count = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            count++;
        }
    }

    return count;
}

// COUNT DIGITS
int digits (string str)
{
    int count = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            count++;
        }
    }

    return count;
}

// COUNT SPECIAL CHARACTERS
int special_characters (string str)
{
    int count = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9')))
        {
            count++;
        }
    }

    return count;
}

/*

output : 1

Input the string : anantha narayanan 123
Number of alphabets in a string is : 16
Number of digits in a string is : 3
Number of special characters in a string is : 2

output :2 

Input the string : sri@gmail.com
Number of alphabets in a string is : 11
Number of digits in a string is : 0
Number of special characters in a string is : 2

*/