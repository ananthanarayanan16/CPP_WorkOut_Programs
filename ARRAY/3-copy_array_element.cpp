// Write a program in C++ to copy the element of one array into another array.

#include"iostream"
using namespace std;

int main()
{
    int i, size;

    cout<< "Input the size of the array : ";
    cin>> size;

    int arr_1[size], arr_2[size];

    cout<< "Enter " << size << " elements in the array : \n";
    for(i = 0; i < size; i++)
    {
        cout<< "Element - " << i << " : ";
        cin>> arr_1[i];
    }
    // COPYING 1 ARRAY TO 2 ARRAY
    for(i = 0; i < size; i++)
    {
        arr_2[i] = arr_1[i];
    }
    cout<< "The element stored in the first array are : \n";
    for(i = 0; i < size; i++)
    {
        cout<< arr_1[i] << " ";
    }
    cout<< "\nThe element stored in the second array are : \n";
    for(i = 0; i < size; i++)
    {
        cout<< arr_2[i] << " ";
    }
    cout<< endl;

    return 0;
}


/*

output :

Input the size of the array : 5
Enter 5 elements in the array : 
Element - 0 : 1
Element - 1 : 2
Element - 2 : 3
Element - 3 : 4
Element - 4 : 5
The element stored in the first array are : 
1 2 3 4 5 
The element stored in the second array are : 
1 2 3 4 5 

*/