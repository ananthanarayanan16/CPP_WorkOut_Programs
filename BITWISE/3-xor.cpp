//  Bitwise XOR '^' operator.

#include"iostream"
using namespace std;

int main()
{
    int x, y;

    cout<< "Enter two number : ";
    cin>> x>> y;
    x = x ^ y;
    // x ^= y;
    cout<< "Output of x ^ y operators : " << x;

    return 0;
}

/*
outputs :

Enter two number : 10 3
Output of x ^ y operators : 9

*/