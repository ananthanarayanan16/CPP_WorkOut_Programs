// Write a C++ program to find the factorial of a given number without using loop and with using goto statement.

#include"iostream"
using namespace std;

int main()
{
    int n, fact = 1, i = 1;

    cout<< "Enter the number to find factorial : ";
    cin>> n;

    go:
    fact = fact * i;
    i++;
    if(i <= n)
    {
        goto go;
    }
    cout<< "Factorial of " << n << " is : " << fact << endl;

    return 0;
}

/*
output : 

Enter the number to find factorial : 5
Factorial of 5 is : 120

*/