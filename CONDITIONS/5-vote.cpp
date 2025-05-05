// Write a CPP program to read the age of a candidtate and determine whether he/she is eligible to cast his/her vote.

#include"iostream"
using namespace std;

int main()
{
    int age;

    cout<< "Enter your age : ";
    cin>> age;

    if(age >= 18)
    {
        cout<< "Congratulation ! You are eligible for casting your vote.\n";
    }
    else
    {
        cout<< "Sorry ! You are not eligible for casting your vote.\n";
    }

    return 0;
}


/*
outputs :

Enter your age : 18
Congratulation ! You are eligible for casting your vote.

Enter your age : 14
Sorry ! You are not eligible for casting your vote.
*/