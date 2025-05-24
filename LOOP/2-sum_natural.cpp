// Write a C++ program to compute the sum of the first 10 natural number.

#include"iostream"
using namespace std;

int main()
{
    int i, sum = 0;

    for(i = 1; i <= 10; i++)
    {
        sum = sum + i;
        cout<< i << "\n";
    }
    cout<< "The sum of first 10 natural numbers : " << sum << endl;

    return 0;
}

/*
output :

1
2
3
4
5
6
7
8
9
10
The sum of first 10 natural numbers : 55

*/