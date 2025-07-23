// Write a program in C++ to print string.

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;

    cout<< "Enter your name (use cin) : ";
    cin>> name;
    cout<< "Your name is : " << name << endl;

    cin.ignore(); // CLEAR THE NEWLINE CHARACTE ERROR  [This only handle one character]
    
    // cin.ignore(numeric_limits<streamsize>::max(), '\n'); THIS CLEAR ENTIRE INPUT BUFFER UPTO THE NEWLINE

    cout<< "Enter your name (use getline) : ";
    getline(cin, name);
    cout<< "Your name is : " << name << endl;

    return 0;
}


/*

output 1 :

Enter your name (use cin) : AnanthaNarayanan
Your name is : AnanthaNarayanan
Enter your name (use getline) : Anantha Narayanan
Your name is : Anantha Narayanan

*/