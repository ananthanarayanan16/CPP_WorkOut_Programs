// Write a CPP program to find largest in three numbers.

#include<iostream>
using namespace std;

int main()
{
    int num_1, num_2, num_3;

    cout<< "Enter three numbers : ";
    cin>> num_1 >> num_2 >> num_3;
    cout<< "1st number = " << num_1 << "\t2nd number = " << num_2 << "\t3rd number = " << num_3 << endl;

    if(num_1 > num_2)
    {
        if(num_1 > num_3)
        {
            cout<< "1st number is greatest among three.\n";
        }
        else
        {
            cout<< "2nd number is greatest among three.\n";
        }
    }
    else if(num_2 > num_3)
    {
        cout<< "2nd number is greatest among three.\n";
    }
    else
    {
        cout<< "3rd number is greatest among three.\n";
    }

    return 0;
}

/*
outputs :

Enter three numbers : 12 23 34
1st number = 12 2nd number = 23 3rd number = 34
3rd number is greatest among three.

Enter three numbers : 12 34 23
1st number = 12 2nd number = 34 3rd number = 23
2nd number is greatest among three.

Enter three numbers : 43 23 12
1st number = 43 2nd number = 23 3rd number = 12
1st number is greatest among three.
*/