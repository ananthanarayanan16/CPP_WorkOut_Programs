// Write a program in C++ to find the maximum number of character in a string.

#include"iostream"
#include"string"
using namespace std;

int main()
{
    string str;
    int count = 0, pos;

    cout<< "Input the string : ";
    getline(cin, str);
    for(int i = 0; str[i] != '\0'; i++)
    {
        int n = 0;
        for(int j = 0; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                n++;
            }
        }
        if(n > count)
        {
            count = n;
            pos = i;
        }
    }
    cout<< "The highest frequency of character '" << str[pos] << "' appears number of times : " << count << endl;

    return 0;
}

/*

output :

Input the string : vazhga vazhamudan
The highest frequency of character 'a' appears number of times : 5

*/