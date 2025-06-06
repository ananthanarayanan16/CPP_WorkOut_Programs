// Write a C++ program to make such a pattern like a pyramid with a number which will repeat the number in the same row.

#include"iostream"
using namespace std;

int main()
{
    int i, j, num;

    cout<< "Enter number of rows : ";
    cin>> num;
    for(i = 1; i <= num; i++)
    {
        for(j = i; j <= num; j++)
        {
            cout<< " ";
        }
        for(j = 1; j <= i; j++)
        {
            cout<< i << " ";
        }
        cout<< endl;
    }

    return 0;
}


/*
output 1 :

Enter number of rows : 4
    1 
   2 2 
  3 3 3 
 4 4 4 4 
 
 output 2 :
 
 Enter number of rows : 9
         1 
        2 2 
       3 3 3 
      4 4 4 4 
     5 5 5 5 5 
    6 6 6 6 6 6 
   7 7 7 7 7 7 7 
  8 8 8 8 8 8 8 8 
 9 9 9 9 9 9 9 9 9 
 
 */