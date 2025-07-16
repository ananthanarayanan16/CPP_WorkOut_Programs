// Write a program in C++ to seperate odd and even integer into seperate arrays.

#include<iostream>
using namespace std;

int main()
{
    int size, num, n = 0, m = 0;

    cout<< "Input the number of elements to be stored in the array : ";
    cin>> size;

    int odd[size], even[size];

    cout<< "Input " << size << " elements in the array : \n";
    for(int i = 0; i < size; i++)
    {
        cout<< "Element - " << i << " : ";
        cin>> num;
        if(num % 2 != 0)
        {
            odd[n] = num;
            n++;
        }
        else
        {
            even[m] = num;
            m++;
        }
    }
    cout<< "The odd elements are : \n";
    for(int i = 0; i < n; i++)
    {
        cout<< odd[i] << " ";
    }
    cout<< "\nThe even elements are : \n";
    for(int i = 0; i < m; i++)
    {
        cout<< even[i] << " ";
    }
    cout<< endl;

    return 0;
}

/*

output :

Input the number of elements to be stored in the array : 6
Input 6 elements in the array : 
Element - 0 : 1
Element - 1 : 2
Element - 2 : 3
Element - 3 : 4
Element - 4 : 5
Element - 5 : 6
The odd elements are : 
1 3 5 
The even elements are : 
2 4 6 

*/