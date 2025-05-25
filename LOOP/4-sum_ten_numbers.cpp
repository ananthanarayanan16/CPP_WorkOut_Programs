// Write a C++ program to read 10 numbers from keyboard and find their sum and average.

#include"iostream"
using namespace std;

int main()
{
    int n, sum = 0;
    float avg;

    cout<< "Input the 10 numbers : \n";
    for(int i = 1; i <= 10; i++)
    {
        cout<< "\nNumber - " << i << " : ";
        cin>> n;
        sum = sum + n;
    }
    avg = (float) sum / 10;
    cout<< "The Sum of 10 numbers is : " << sum << endl;
    cout<< "The Average is : " << avg << endl;

    return 0;
}

/*
output :

Input the 10 numbers : 

Number - 1 : 11

Number - 2 : 22

Number - 3 : 33

Number - 4 : 44

Number - 5 : 55

Number - 6 : 66

Number - 7 : 77

Number - 8 : 88

Number - 9 : 99

Number - 10 : 100
The Sum of 10 numbers is : 595
The Average is : 59.5

*/