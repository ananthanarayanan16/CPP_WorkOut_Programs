// Write a C++ program to display the asterisk right angle trianle.

#include"iostream"
using namespace std;

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            cout<< " * ";
        }
        cout<< endl;
    }

    return 0;
}

/*
output :

 * 
 *  * 
 *  *  * 
 *  *  *  * 
 *  *  *  *  * 
 
 */