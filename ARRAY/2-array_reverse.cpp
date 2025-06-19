// Write a program in C++ to read n nummber of values in an array and display them in reverse order.

#include"iostream"
using namespace std;

int main()
{
    int i, size;
    
    cout<< "Input the size of the array : ";
    cin>> size;
    
    int arr[size];

    cout<< "Input " << size << " number of element in the array : \n";
    for(i = 0; i < size; i++)
    {
        cin>> arr[i];
    }
    cout<< "\nThe values store into the array are :\n";
    for(i = 0; i < size; i++)
    {
        cout<< arr[i] << " ";
    }
    cout<< "\nThe values store into the array in reverse are  : \n";
    for(i = size - 1; i >= 0; i--)
    {
        cout<< arr[i] << " ";
    }
    cout<< endl;

    return 0;
}



/*

output :

Input the size of the array : 5 
Input 5 number of element in the array : 
1
2
3
4
5

The values store into the array are :
1 2 3 4 5 
The values store into the array in reverse are  : 
5 4 3 2 1 

*/