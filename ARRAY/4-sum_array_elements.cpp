// Write a program in C++ to find sum of all element of the array.

#include"iostream"
using namespace std;

int main()
{
    int i, size;

    cout<< "Input the size of the array : ";
    cin>> size;

    int arr[size], sum = 0;
    
    cout<< "Enter " << size << " element in the array : \n";
    for(i = 0; i < size; i++)
    {
        cout<< "Element - " << i << " : ";
        cin>> arr[i];
        sum = sum + arr[i];
    }
    cout<< "Sum of all element stored in the array is : " << sum;

    return 0;
}


/*

output :

Input the size of the array : 5
Enter 5 element in the array : 
Element - 0 : 1
Element - 1 : 2
Element - 2 : 3
Element - 3 : 4
Element - 4 : 5
Sum of all element stored in the array is : 15

*/