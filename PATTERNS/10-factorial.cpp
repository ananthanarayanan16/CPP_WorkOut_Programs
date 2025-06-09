// Write a program in C++ to print factorial

#include"iostream"
using namespace std;

int main()
{
    int i, n, fact = 1;

    cout<< "Input the number : ";
    cin>> n;
    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout<< "\nFactorial is : " << fact ;

    return 0;
}