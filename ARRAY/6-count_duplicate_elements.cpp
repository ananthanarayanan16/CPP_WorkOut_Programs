// Write a program in C++ to count the total number of duplicate elements in an array.

#include"iostream"
using namespace std;

int main()
{
    int size, t = 0, count = 0; 

    cout<< "Input number of elements to be stored in the array : ";
    cin>> size;

    int arr[size], dup[size];

    cout<< "Input " << size << " elements in the array : \n";
    for(int i = 0; i < size; i++)
    {
        cout<< "Element - " << i << " : ";
        cin>> arr[i];
    }
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < t; j++)
        {
            if(arr[i] == dup[j])
            {
                goto end;
            }
        }
        for(int k = i + 1; k < size; k++)
        {
            if(arr[i] == arr[k])
            {
                count++;
            }
        }
        // if(i != 0)
        // {
            dup[t] = arr[i];
            t++;
        // }
        end:
    }
    cout<< "The number of duplicate elements found in the array is : " << count << endl;

    return 0;
}


/*

output : 

Input number of elements to be stored in the array : 5
Input 5 elements in the array : 
Element - 0 : 1
Element - 1 : 2
Element - 2 : 1
Element - 3 : 2
Element - 4 : 1
The number of duplicate elements found in the array is : 3

*/