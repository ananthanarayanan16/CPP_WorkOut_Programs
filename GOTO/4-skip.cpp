// Write a C++ program to skip some statement in your program.

#include"iostream"
using namespace std;

int main()
{
    int n;

    goto go;
    cout<< "Enter a number : ";
    cin>> n;
    n = n * n;
    cout<< "The square of the give number : " << n;

    go:
    cout<< "The program skip the statement.\n";

    return 0;
}

/*
output :

The program skip the statement.
*/