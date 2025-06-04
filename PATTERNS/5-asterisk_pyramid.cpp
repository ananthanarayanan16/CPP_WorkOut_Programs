// Write a C++ program to make a such a pattern as a pyramid wuth an asterisk.

#include"iostream"
using namespace std;

int main()
{
    int i, j, n;

    cout<< "Enter Number Of Rows : ";
    cin>> n;
    for(i = 1; i <= n; i++)
    {
        for(j = n; j >= i; j--)
        {
            cout<< " ";
        }
        for(j = 1; j <= i; j++)
        {
            cout<< "* ";
        }
        cout<< endl;
    }

    return 0;
}

/*

output 1 :

Enter Number Of Rows : 5
     * 
    * * 
   * * * 
  * * * * 
 * * * * * 
 
 output 2 :
 
 Enter Number Of Rows : 15
               * 
              * * 
             * * * 
            * * * * 
           * * * * * 
          * * * * * * 
         * * * * * * * 
        * * * * * * * * 
       * * * * * * * * * 
      * * * * * * * * * * 
     * * * * * * * * * * * 
    * * * * * * * * * * * * 
   * * * * * * * * * * * * * 
  * * * * * * * * * * * * * * 
 * * * * * * * * * * * * * * * 
 
 */