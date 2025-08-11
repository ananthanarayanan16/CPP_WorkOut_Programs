// Write a program in C++ to count the total number of vowels or consonant in a string.

#include"iostream"
#include"string"
using namespace std;
int vowels(string);                 // FUNCTIONS DECLARE 
int consonant(string);

int main()
{
    string str;

    cout<< "Input the string : ";
    getline(cin, str);
    cout<< "The total number of vowels in a string is : " << vowels(str) << endl;
    cout<< "The total number of consonant in a string is : " << consonant(str) << endl;

    return 0;
}

// VOWELS FUNCTION
int vowels(string str)
{
    int count = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if((str[i] == 'A') || (str[i] == 'E') || (str[i] == 'I') || (str[i] == 'O') || (str[i] == 'U') || (str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u'))
        {
            count++;
        }
    }

    return count;
}

//  CONSONANT FUNCTION
int consonant(string str)
{
    int count = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if((str[i] != 'A') && (str[i] != 'E') && (str[i] != 'I') && (str[i] != 'O') && (str[i] != 'U') && (str[i] != 'a') && (str[i] != 'e') && (str[i] != 'i') && (str[i] != 'o') && (str[i] != 'u'))
        {
            count++;
        }
    }

    return count;
}

/*

output :

Input the string : jarvis
The total number of vowels in a string is : 2
The total number of consonant in a string is : 4

*/