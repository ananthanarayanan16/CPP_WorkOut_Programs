// Write a C++ program to display the cube of the number up to an integers.

#include"iostream"
using namespace std;

int main()
{
    int n, i, cube;

    cout<< "Input the number of terms : ";
    cin>> n;

    for(i = 1; i <= n; i++)
    {
        cube = i * i * i;               // finding cube
        cout<< "Number is : " << i << " and cube of the " << i << " : " << cube << endl;
    }

    return 0;
}

/*

output :

Input the number of terms : 6
Number is : 1 and cube of the 1 : 1
Number is : 2 and cube of the 2 : 8
Number is : 3 and cube of the 3 : 27
Number is : 4 and cube of the 4 : 64
Number is : 5 and cube of the 5 : 125
Number is : 6 and cube of the 6 : 216

*/