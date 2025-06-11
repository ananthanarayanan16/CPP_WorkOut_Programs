// Write a program in C++ to display the first n number of fibonncci series

#include"iostream"
using namespace std;

int main()
{
    int i, n, a, b, c;

    cout<< "Input number of term to display : ";
    cin>> n;
    cout<< "Here is the fabonacci series to upto " << n << " terms : \n";
    a = 0, b = 1;
    cout<< a << endl << b  << endl;
    for(i = 1; i <= n - 2; i++)
    {
        c = a + b;
        cout<< c << endl;
        a = b;
        b = c;
    }

    return 0;
}

/*
output :

Input number of term to display : 8
Here is the fabonacci series to upto 8 terms : 
0
1
1
2
3
5
8
13

*/