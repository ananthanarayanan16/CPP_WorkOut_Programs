// write a CPP program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.

#include"iostream"
using namespace std;

int main()
{
    int m;

    cout<< "Test date : ";
    cin>> m;

    if(m == 0)
    {
        cout<< "The value n = " << 0 << endl; 
    }
    else if(m > 0)
    {
        cout<< "The value of n = 1\n";
    }
    else
    {
        cout<< "The value of n = -1\n";
    }

    return 0;
}

/*
outputs :

Test date : 12
The value of n = 1

Test date : 0
The value n = 0

Test date : -12
The value of n = -1
*/