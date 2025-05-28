// Write a C++ program to display the n terms of odd natural numbers and their sum.

#include"iostream"
using namespace std;

int main()
{
    int i, n, sum, odd;

    cout<< "Input number of terms : ";
    cin>> n;
    sum = 0;
    odd = 1;
    cout<< "\nThe odd numbers are : ";
    i = 1;
    while(i <= n)
    {
        cout<< odd << " ";
        sum = sum + odd;
        odd = odd + 2;
        i++;
    }
    cout<< "\nThe sum of odd natural numbers upto " << n << " terms : " << sum << endl;

    return 0;
}


/*

output :

Input number of terms : 11

The odd numbers are : 1 3 5 7 9 11 13 15 17 19 21 
The sum of odd natural numbers upto 11 terms : 121

*/