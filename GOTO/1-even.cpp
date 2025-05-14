// To print ten even numbers using goto.

#include<iostream>
using namespace std;

int main()
{
    int n = 2;

    go:

    cout<< n << "\n";

    n = n + 2;

    if(n <= 20)
    {
        goto go;
    }

    return 0;
}

/*

output :

2
4
6
8
10
12
14
16
18
20

*/