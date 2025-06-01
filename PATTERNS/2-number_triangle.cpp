// Write a C++ program to make sich pattern like a right angle triangle with a number which will repeat number in a row.

#include"iostream"
using namespace std;

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            cout<< i << " ";
        }
        cout<< endl;
    }

    return 0;
}

/*

output :

1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5

*/