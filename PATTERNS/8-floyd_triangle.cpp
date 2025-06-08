// Write a program in C++ to print the floyds triangel.

#include"iostream"
using namespace std;

int main()
{
    int i, j, n;

    cout<< "Enter number of rows : ";
    cin>> n;
    for(i = 1; i <= n; i++)
    {
        for(j = i; j <= n; j++)
        {
            cout<< " ";
        }
        for(j = i; j >= 1; j--)
        {
            if(j % 2 == 0)
            {
                cout<< 0;
            }
            else
            {
                cout<< 1;
            }
        }
        cout<< endl;
    }

    return 0;
}

/* 

output 1:

Enter number of rows : 3
   1
  01
 101
 
 output 2:
 
 Enter number of rows : 6
      1
     01
    101
   0101
  10101
 010101
 
 */