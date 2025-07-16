// Write a program in C++ to find the maximum and minimum element in the array.

#include"iostream"
using namespace std;

int main()
{
    int size, min = 0, max = 0;

    cout<< "Input the number of elements to be stored in the array : ";
    cin>> size;

    int arr[size];

    cout<< "Input " << size << " elements in the array : \n";
    for(int i = 0; i < size; i++)
    {
        cout<< "Element - " << i << " : ";
        cin>> arr[i];
        if(min == 0 && max == 0)
        {
            min = arr[i];
            max = arr[i];
        }
        else if(arr[i] < min)
        {
            min = arr[i];
        }
        else 
        {
            max = arr[i];
        }
    }
    cout<< "Minimum element is : " << min << endl;
    cout<< "Maximum element is : " << max << endl;

    return 0;
}


/*

output :

Input the number of elements to be stored in the array : 5
Input 5 elements in the array : 
Element - 0 : 11
Element - 1 : 22
Element - 2 : 33
Element - 3 : 44
Element - 4 : 5
Minimum element is : 5
Maximum element is : 44

*/