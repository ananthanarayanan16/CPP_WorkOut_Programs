// Write a program in C++ to merge two arrays of the same size sorted in descending order.

#include"iostream"
using namespace std;

int main()
{
    int i, j, swap, size_1, size_2, t = 0;

    cout<< "Input number of elements to be stored in the first array : ";
    cin>> size_1;

    int arr_1[size_1];

    cout<< "Input " << size_1 << " elements in the array : \n";
    for(i = 0; i < size_1; i++)
    {
        cout<< "Element - " << i << " : ";
        cin>> arr_1[i];
    }
    cout<< "Input number of elements to be stored in the second array : ";
    cin>> size_2;

    int arr_2[size_2];

    cout<< "Input " << size_2 << " elements in the array : \n";
    for(i = 0; i < size_2; i++)
    {
        cout<< "Elemenst - " << i << " : ";
        cin>> arr_2[i];
    }

    arr_1[size_1 + size_2];
    
    for(i = size_1; i < (size_1 + size_2); i++)
    {
        arr_1[i] = arr_2[t];
        t++;
    }
    int n = size_1 + size_2;
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr_1[i] < arr_1[j])
            {
                swap = arr_1[i];
                arr_1[i] = arr_1[j];
                arr_1[j] = swap;
            }
        }
    }
    cout<< "The merge array in descending order is : \n";
    for(i = 0; i < (size_1 + size_2); i++)
    {
        cout<< arr_1[i] << " ";
    }
    cout<< endl;
    return 0;
}

/*

output : 1

Input number of elements to be stored in the first array : 3
Input 3 elements in the array : 
Element - 0 : 1
Element - 1 : 2
Element - 2 : 3
Input number of elements to be stored in the second array : 3
Input 3 elements in the array : 
Elemenst - 0 : 1
Elemenst - 1 : 2
Elemenst - 2 : 3
The merge array in descending order is : 
3 3 2 2 1 1

output : 2

Input number of elements to be stored in the first array : 3
Input 3 elements in the array : 
Element - 0 : 1
Element - 1 : 2
Element - 2 : 3
Input number of elements to be stored in the second array : 3
Input 3 elements in the array : 
Elemenst - 0 : 4
Elemenst - 1 : 5
Elemenst - 2 : 6
The merge array in descending order is : 
6 5 4 3 2 1 

*/