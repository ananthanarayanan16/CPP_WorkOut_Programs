// Write a C++ program to display n term of natural numbre and their sum.

#include<iostream>
using namespace std;

int main()
{
    int i, sum = 0, n;

    cout<< "Enter number of terms : ";
    cin>> n;
    cout<< "The first " << n << " natural numbers are :\n";
    i = 1;
    do
    {                               
        sum = sum + i;              // sum the natural numbers.
        cout<< i << endl;
        i++;
    }
    while(i <= n);
    cout<< "The sum of natural numbers upto " << n << "terms : " << sum << endl;

    return 0;
}

/*

output :

Enter number of terms : 6
The first 6 natural numbers are :
1
2
3
4
5
6
The sum of natural numbers upto 6terms : 21

*/