#include <iostream>
using namespace std;

int main()
{
    int count, m = 1;
    cout << "Enter the size of pattern :";
    cin >> count; // input size 

    for (int i = 1; i <= count; i++) // for row 
    {
        for (int j = 1; j <= count; j++)   // for column 
        {
            if (m == 1)
            {
                cout << m;
                if (j != count)
                    m = 2;
            }
            else
            {
                cout << m;
                if (j != count)
                    m = 1;
            }
        }
        cout << endl;
    }

    return 0;
}

/*
OutPut :- 
Enter the size of pattern :6
121212
212121
121212
212121
121212
212121

*/