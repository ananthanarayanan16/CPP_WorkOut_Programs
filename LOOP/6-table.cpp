// Write a C++ program to display the multiplication table for a given integer.

#include"iostream"
using namespace std;

int main()
{
    int i, n, m;

    cout<< "Input the number (Table to be Calculated) : ";
    cin>> n;
    for(i = 1; i <= 10; i++)
    {
        m = i * n;
        cout<< n << " X " << i << " = " << m << endl;
    }

    return 0;
}

/*

output :

Input the number (Table to be Calculated) : 10
10 X 1 = 10
10 X 2 = 20
10 X 3 = 30
10 X 4 = 40
10 X 5 = 50
10 X 6 = 60
10 X 7 = 70
10 X 8 = 80
10 X 9 = 90
10 X 10 = 100

*/