#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5];
    int c = 0;
    string b;

    cin >> a[1];
    cin >> a[2];
    cin >> a[3];
    cin >> a[4];


    cin >> b;

    for (int i = 0; i < b.length(); i++)
    {
        if ( b[i] == '1')
        {
            c = c + a[1];
        }
        else if ( b[i] == '2')
        {
            c = c + a[2];
        }
        else if ( b[i] == '3')
        {
            c = c + a[3];
        }
        else if ( b[i] == '4')
        {
            c = c + a[4];
        }
        
        
        
        
    }
    

    cout << c << "\n";

    return 0;
}