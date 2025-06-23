// Write a program in C++ to merge two arrays of the same size sorted in descending order.

#include"iostream"
using namespace std;

int main()
{
    int i, t = 0, size_1, size_2, temp;

    cout<< "Input number of element to be sorted in the first array : ";
    cin>> size_1;
    
    int arr_1[size_1];

    cout<< "Input " << size_1 << " elements in the array : \n";
    for(i = 0; i < size_1; i++)
    {
        cout<< "Element - " << i << " : ";
        cin>> arr_1[i];
    }
    cout<< "Input the number of element to be sorted in the second array : ";
    cin>> size_2;

    int arr_2[size_2];

    cout<< "Input " << size_2 << " element in the array : \n";
    for(i = 0; i < size_2; i++)
    {
        cout<< "Element - " << i << " : ";
        cin>>arr_2[i];
    }

    arr_1[size_1 + size_2];

    for(i = size_1; i < (size_1 + size_2); i++)
    {
        arr_1[i] = arr_2[t];
        t++;
    }
    
    for(i = 0; i < size_1 + size_2; i++)
    {
        cout<< arr_1[i] << " ";
    }

    for(i = 0; i < size_1 + size_2; i++)
    {
        for(int j = i; j < size_1 + size_2; j++)
        {
            if(arr_1[i] < arr_1[j])
            {
                temp = arr_1[i];
                arr_1[i] = arr_1[j];
                arr_1[j] = temp;
            }
        }
    }
    cout<< "\nThe merged array in descending order is : \n";

    for(i = 0; i < size_1 + size_2; i++)
    {
        cout<< arr_1[i] << " ";
    }
    cout<< endl;

    return 0;
}


/*

output :

Input number of element to be sorted in the first array : 2
Input 2 elements in the array : 
Element - 0 : 1
Element - 1 : 2
Input the number of element to be sorted in the second array : 2
Input 2 element in the array : 
Element - 0 : 2
Element - 1 : 1
1 2 2 1 
The merged array in descending order is : 
2 2 1 1 

*/