// Write a C++ program to check whether give number is prime number or not using goto.

#include"iostream"
using namespace std;

int main()
{
    int num, i = 1, t = 0;

    cout<< "Enter a number : ";
    cin>> num;

    go:
    if(num % i == 0)
    {
        t++;
    }
    i++;
    if(i <= num)
    {
        goto go;
    }
    if(t == 2)
    {
        cout<< "The given " << num << " is prime number.\n";
    }
    else
    {
        cout<< "The given " << num << " is not prime number.\n";
    }

    return 0;
}

/*
outputs :

Enter a number : 5
The given 5 is prime number.

Enter a number : 4
The given 4 is not prime number

*/