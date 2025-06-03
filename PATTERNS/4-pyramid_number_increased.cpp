// Write a program in C++ make a pyramid with number increased by 1.

#include"iostream"
using namespace std;

int main()
{
    int n, i, j, k = 1;

    cout<< "Enter Number of Rows : ";
    cin>> n;

    for(i = 1; i <= n; i++)
    {
        for(j = n; j >= i; j--)
        {
            cout<< " ";
        }
        for(j = 1; j <= i; j++)
        {
            cout<< k << " ";
            k++;
        }
        cout<< endl;
    }

    return 0;
}

/*

output 1 :

Enter Number of Rows : 5
     1 
    2 3 
   4 5 6 
  7 8 9 10 
 11 12 13 14 15
 
 output 2 :
 
 Enter Number of Rows : 10
          1 
         2 3 
        4 5 6 
       7 8 9 10 
      11 12 13 14 15 
     16 17 18 19 20 21 
    22 23 24 25 26 27 28 
   29 30 31 32 33 34 35 36 
  37 38 39 40 41 42 43 44 45 
 46 47 48 49 50 51 52 53 54 55 
 
 */