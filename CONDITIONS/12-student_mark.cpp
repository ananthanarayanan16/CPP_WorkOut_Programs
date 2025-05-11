// Write a C++ program to read the roll no, marks of three subjects and calculate the total, percentage and division.

#include<iostream>
using namespace std;

int main()
{
    int rollno, phy, che, cs, total;
    float per;

    cout<< "Input the roll no of the student : ";
    cin>> rollno;
    cout<< "Input the marks : \n";
    cout<< "Physics : ";
    cin>> phy;
    cout<< "Chemistry : ";
    cin>> che;
    cout<< "Computer Science : ";
    cin>>cs;

    total = phy + che + cs;
    per = total / 3;

    cout<< "Roll no : " << rollno;
    cout<< "\n Mark in Physics : " << phy;
    cout<< "\n Mark in Chemistry : " << che;
    cout<< "\n Mark in Computer Science : " << cs;
    cout<< "\n Total mark = " << total << "\t Percentage = " << per;
    cout<< "\nDivision = ";

    if(per >= 80)
    {
        cout<< "Distincatoin.";
    } 
    else if(per >= 70 && per <=80)
    {
        cout<< "First Class.";
    }
    else if(per >= 60 && per <= 70)
    {
        cout<< "Second Class.";
    }
    else if(per >= 50 && per <= 60)
    {
        cout<< "Third Class.";
    }
    else
    {
        cout<< "Fail.";
    }

    return 0;
}


/*
output :

Input the roll no of the student : 2334
Input the marks : 
Physics : 78
Chemistry : 89
Computer Science : 67
Roll no : 2334
 Mark in Physics : 78
 Mark in Chemistry : 89
 Mark in Computer Science : 67
 Total mark = 234        Percentage = 78
Division = First Class.

*/