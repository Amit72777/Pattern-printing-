#include<iostream>
using namespace std ;
int main()
{
    int n  ; 
    cout << "Enter the Numbe of line in triangle : " ;
    cin >> n;


    for (int  i = 1; i <= n ; i++)
    {
        
        for (int  j =i; j <= n ; j++)
        {
            cout<< "*";
        }
        cout<<endl;
    }
    
    return 0;
}