// Write a C++ program to determine eligibility for admission to a professional course based on the follwing criteria.

#include"iostream"
using namespace std;

int main()
{
    int maths, phy, chem, total_1, total_2;

    cout<< "Input the mark obtained in physics : ";
    cin>> phy;
    cout<< "Input the mark obtained in chemistry : ";
    cin>> chem;
    cout<< "Input the mark obtained in mathematices : ";
    cin>> maths;

    total_1 = phy+chem+maths;
    total_2 = maths+phy;

    cout<< "\nTotal mark obtained in mathematices, chemistry and physice : " << total_1;
    cout<< "\nTotal mark ontained in mathematices and physice : " << total_2;
    
    if((maths >= 65 && chem >= 50 && phy >= 55) && (total_1 >= 190 && total_2 >= 140))
    {
        cout<< "\n The candidate is eligible for admission.";
    }
    else
    {
        cout<< "\nThe candidate is not eligible for admission.";
    }

    return 0;
}

/*
outputs :

Input the mark obtained in physics : 66
Input the mark obtained in chemistry : 77
Input the mark obtained in mathematices : 88

Total mark obtained in mathematices, chemistry and physice : 231
Total mark ontained in mathematices and physice : 154
The candidate is eligible for admission.
 
Input the mark obtained in physics : 55
Input the mark obtained in chemistry : 44 
Input the mark obtained in mathematices : 45

Total mark obtained in mathematices, chemistry and physice : 144
Total mark ontained in mathematices and physice : 100
The candidate is not eligible for admission.
*/