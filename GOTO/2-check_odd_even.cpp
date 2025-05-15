// Check whether given number is even or odd untill this program run to click exit, using goto statement.

#include<iostream>
using namespace std;

int main()
{
    int num, two = 1, n;

    go:
    cout<< "Enter the number : ";
    cin>> num;

    if(num % two == 0)
    {
        cout<< "Entered number " << num << " is even.\n";
    }
    else
    {
        cout<< "Entered number " << num << " is odd.\n";
    }

    cout<< "Exit to click 1, or Run again to click anu number : ";
    cin>> n;

    if(n != 1)
    {
        goto go;
    }
    else
    {
        cout<< "\nProgram terminated succussefully.\n";
    }

    return 0;
}


/*
outputs :

Enter the number : 2
Entered number 2 is even.
Exit to click 1, or Run again to click anu number : 1

Program terminated succussefully.

Enter the number : 4
Entered number 4 is even.
Exit to click 1, or Run again to click anu number : 2
Enter the number : 5
Entered number 5 is even.
Exit to click 1, or Run again to click anu number : 1

Program terminated succussefully.

*/