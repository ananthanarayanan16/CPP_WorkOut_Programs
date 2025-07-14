// Write a program in c to print all unique elements in an array.

#include<iostream>
using namespace std;

int main()
{
    int size, t = 0;

    cout<< "Print all unique elements of an array\n";
    cout<< "-------------------------------------\n";
    cout<< "Input number of elements to be stored in the array : ";
    cin>> size;

    int arr[size], unique[size], count = 0;

    cout<< "Input" << size << " elements in the array : \n";
    for(int i = 0; i < size; i++)
    {
        cout<< "Element - " << i << " : ";
        cin>> arr[i];
    }
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        if(count == 1)
        {
            unique[t] = arr[i];
            t++;
            count = 0;
        }
        else
        {
            count = 0;
        }
    }
    cout<< "The given array : ";
    for(int i = 0; i < size; i++)
    {
        cout<< arr[i] << " ";
    }
    cout<< "\nThe unique elements found in the array are : ";
    for(int i = 0; i < t; i++)
    {
        cout<< unique[i] << " ";
    }
    cout<< endl;

    return 0;
}


/*

output :

Print all unique elements of an array
-------------------------------------
Input number of elements to be stored in the array : 6
Input6 elements in the array : 
Element - 0 : 1
Element - 1 : 2
Element - 2 : 3
Element - 3 : 4
Element - 4 : 1
Element - 5 : 4
The given array : 1 2 3 4 1 4 
The unique elements found in the array are : 2 3 

*/