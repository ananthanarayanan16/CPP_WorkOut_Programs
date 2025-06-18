// Write a program in C++ to store element in an array and print them.

#include"iostream"
using namespace std;

int main()
{
    int i, size;

    cout<< "Enter size of the array : ";
    cin>> size;

    int arr[size];

    cout<< "Enter " << size << " numbers : \n";
    for(i = 0; i < size; i++)
    {
        cin>> arr[i];
    }
    cout<< "Given elements are : \n";
    for(i = 0; i < size; i++)
    {
        cout<< arr[i] << endl;
    }

    return 0;
}





/*

output :

Enter size of the array : 5
Enter 5 numbers : 
1
2
3
4
5
Given elements are : 
1
2
3
4
5

*/