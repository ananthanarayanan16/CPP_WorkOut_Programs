// Write a program in C++ to count the frequency of each element of an array.

#include"iostream"
using namespace std;

int main()
{
    int size, t = 0;

    cout<< "Input number of elements to be stored in the array : ";
    cin>> size;

    int arr[size], uni[size];

    cout<< "Input " << size << " elements in the array : \n";
    for(int i = 0; i < size; i++)
    {
        cout<< "Element - " << i << " : ";
        cin>> arr[i];
    }
    cout<< "The frequency of all elements of an array : \n";
    for(int i = 0; i < size; i++)
    {
        int count = 1;
        for(int j = 0; j < t; j++)
        {
            if(arr[i] == uni[j])
            {
                goto end;
            }
        }
        for(int j = 0; j < size; j++)
        {
            if(arr[i] == arr[j] && i!=j)
            {
                count++;
            }
        }
        uni[t] = arr[i];
        t++;
        cout<< arr[i] << " occurs " << count << " times\n";
        end:
    }

    return 0;
}

/*

output :

Input number of elements to be stored in the array : 10
Input 10 elements in the array : 
Element - 0 : 1
Element - 1 : 2
Element - 2 : 3
Element - 3 : 4
Element - 4 : 5
Element - 5 : 5
Element - 6 : 4
Element - 7 : 3
Element - 8 : 2
Element - 9 : 1
The frequency of all elements of an array : 
1 occurs 2 times
2 occurs 2 times
3 occurs 2 times
4 occurs 2 times
5 occurs 2 times

*/