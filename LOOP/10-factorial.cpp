// Write a C++ program to calculate the factorial of a given number.

#include"iostream"
using namespace std;

int main()
{
    int i, num, fact = 1;

    cout<< "Input the number : ";
    cin>> num;
    i = 1;
    do
    {
        fact = fact * i;
        i++;
    }while(i <= num);
    cout<< "The factorila of " << num << " is " << fact << endl;

    return 0;
}

/*

outputs :

Input the number : 5
The factorila of 5 is 120

Input the number : 10
The factorila of 10 is 3628800

*/