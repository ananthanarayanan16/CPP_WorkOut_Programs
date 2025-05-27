// Write a C++ program to display the multiplier table vertically start from 1 to n.

#include"iostream"
using namespace std;

int main()
{
    int i, j, n, m;

    cout<< "Input upto the table number starting from 1 : ";
    cin>> n;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            m = i * j;
            cout<< i << " X " << j << " = " << m << endl;
        }
        cout<< endl;
    }

    return 0;
}

/*

output :

Input upto the table number starting from 1 : 5
1 X 1 = 1
1 X 2 = 2
1 X 3 = 3
1 X 4 = 4
1 X 5 = 5

2 X 1 = 2
2 X 2 = 4
2 X 3 = 6
2 X 4 = 8
2 X 5 = 10

3 X 1 = 3
3 X 2 = 6
3 X 3 = 9
3 X 4 = 12
3 X 5 = 15

4 X 1 = 4
4 X 2 = 8
4 X 3 = 12
4 X 4 = 16
4 X 5 = 20

5 X 1 = 5
5 X 2 = 10
5 X 3 = 15
5 X 4 = 20
5 X 5 = 25

*/