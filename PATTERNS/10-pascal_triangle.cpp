// Write a C++ program to display pascal's triangle.

#include"iostream"
using namespace std;

int fact(int); // DECLARAING FACTORIAL FUNCTION

int main()
{
    int num, row, col, n, r, p, k;

    cout<< "Input number of rows : ";
    cin>> num;
    for(row = 0; row < num; ++row)
    {
        for(col = row; col < num; ++col)
        {
            cout<< " ";
        }
        for(col = 0; col <= row; ++col)
        {
            n = fact(row);
            r = fact(col);
            k = fact(row - col);
            p = n / (k * r);
            cout<< p << " ";
        }
        cout<< endl;
    }

    return 0;
}


// FINDING FACTORIAL 

int fact(int n)
{
    int i, fact = 1;

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}


/*

output 1 :

Input number of rows : 5
     1 
    1 1 
   1 2 1 
  1 3 3 1 
 1 4 6 4 1 
 
output 2 :
Input number of rows : 7
       1 
      1 1 
     1 2 1 
    1 3 3 1 
   1 4 6 4 1 
  1 5 10 10 5 1 
 1 6 15 20 15 6 1
 
 */