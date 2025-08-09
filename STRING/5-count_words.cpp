// Write a program in C++ to count the total number of words in a string.

#include"iostream"
#include"string"
using namespace std;
int count(string);          // DECLARE COUNT FUNCTION

int main()
{
    // int words;
    string str;
    cout<< "Input the string : ";
    getline(cin, str);
    // words = count(str);
    cout<< "Total number of words in the string is : " << count(str);
    cout<< endl;

    return 0;
}

int count(string str)           //  FINDING NUMBER OF WORDS
{
    int n = 1;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            n++;
        }
    }
    // cout << "Words : " << n;
    return n;
}


/*

output : 1

Input the string : This is Anantha Narayanan
Total number of words in the string is : 4

output : 2

Input the string : I have another name is Srinivash
Total number of words in the string is : 6

*/