// Write a C++ program to display the pattern as a pyramid using asterisk, with each row containing and odd number of asterisk.

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
        for(j = 1; j < i * 2; j++)
        {
            cout<< "*";
        }
        cout<< endl;
    }

    return 0;
}

/*

output 1 :

Enter number of rows : 4
    *
   ***
  *****
 *******
 
output 2 :

 Enter number of rows : 7
       *
      ***
     *****
    *******
   *********
  ***********
 *************
 
 */