// Write a program in C++ to make such a pattern like a right angle triangle with the number increased by 1.

#include"iostream"
using namespace std;

int main()
{
    int i, j, n, k = 1;

    cout<< "Enter number of rows : ";
    cin>> n;

    for(i = 1; i <= n; i++)
    {
        j = 1;
        while(j <= i)
        {
            cout<< k << " ";
            k++;
            j++;
        }
        cout<< endl;
    }

    return 0;
}

/*

output :

Enter number of rows : 5
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15

Enter number of rows : 10
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