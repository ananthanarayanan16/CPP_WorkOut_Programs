// To print first ten natural numbers using goto statement.

#include<iostream>
using namespace std;

int main()
{
    int n = 1;

    print:      // GOTO LABEL   

    cout<< "\n" << n;
    n = n + 1;

    if(n <= 10)
    {
        goto print;
    }

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

*/