// Write a program in C++ to find the sum of all element of the array.

#include<iostream>
using namespace std;

int main()
{
    int size, sum = 0;

    cout<< "Input the number of elements to be stored in the array : ";
    cin>> size;

    int arr[size];

    cout<< "Input " << size << " elements in the array : ";
    for(int i = 0; i < size; i++)
    {
        cout<< "Element - " << i << " : ";
        cin>> arr[i];
        sum = sum + arr[i];
    }
    cout<< "Sum of all elements stroed in the array is : " << sum;

    return 0;
}