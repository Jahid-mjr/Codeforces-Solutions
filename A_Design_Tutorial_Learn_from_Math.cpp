#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); // Speeds up I/O
    //cin.tie(nullptr);
    int a;
    cin >> a;
    if (a%2 != 0)
    {
        a = a - 9;
        if (a>9)
        {
            cout << 9 << " " << a;
        }
        else
        {
            cout << a << " " << 9;
        }
        
        
        
    }
    else
    {
        a = a - 4; 
        if (a>4)
        {
            cout << 4 << " " << a;
        }
        else
        {
            cout << a << " " << 4;
        }
        
    }
    
    
    return 0;
}