// write a program in C++ to display pattern like a diamond.

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
            cout<< "  ";
        }
        for(j = 1; j < i * 2; j++)
        {
            cout<< "* ";
        } 
        cout<< endl;
    }
    for(i = n - 1; i >= 1; i--)
    {
        for(j = i; j <= n; j++)
        {
            cout<< "  ";
        }
        for(j = 1; j < i * 2; j++)
        {
            cout<< "* ";
        }
        cout<< endl;
    }

    return 0;
}


/*

output 1:

Enter number of rows : 5
          * 
        * * * 
      * * * * * 
    * * * * * * * 
  * * * * * * * * * 
    * * * * * * * 
      * * * * * 
        * * * 
          * 
     
output 2:

Enter number of rows : 10
                    * 
                  * * * 
                * * * * * 
              * * * * * * * 
            * * * * * * * * * 
          * * * * * * * * * * * 
        * * * * * * * * * * * * * 
      * * * * * * * * * * * * * * * 
    * * * * * * * * * * * * * * * * * 
  * * * * * * * * * * * * * * * * * * * 
    * * * * * * * * * * * * * * * * * 
      * * * * * * * * * * * * * * * 
        * * * * * * * * * * * * * 
          * * * * * * * * * * * 
            * * * * * * * * * 
              * * * * * * * 
                * * * * * 
                  * * * 
                    * 
*/