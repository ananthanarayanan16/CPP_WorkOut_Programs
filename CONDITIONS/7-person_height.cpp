// Write a CPP program to accept the height of the person in centimeters and categorize the person according to their height.

#include"iostream"
using namespace std;

int main()
{
    int height;

    cout<< "Enter height : ";
    cin>> height;

    if(height < 150)
    {
        cout<< "The person is Dwarf.\n";
    }
    else if(height > 150 && height < 180)
    {
        cout<< "The person is Average.\n";
    }
    else
    {
        cout<< "The person is Tall.\n";
    }

    return 0;
}

/*
outputs :

Enter height : 130
The person is Dwarf.

Enter height : 172
The person is Average.

Enter height : 187
The person is Tall.
*/