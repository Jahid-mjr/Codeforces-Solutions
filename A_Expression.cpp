#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); // Speeds up I/O
    //cin.tie(nullptr);
    int a,b,c;
    cin >> a >> b >> c;

    if (a== 1 && b== 1 && c == 1)
    {
        cout << a+b+c;
    }
    
    else if (a== 1 || b== 1 || c == 1)
    {
        if (a == 1)
        {

            if (c == 1)
            {
                cout << a+b+c;
            }
            else
            {
                cout << (a+b)*c;
            }
            
            
            
        }
        else if (b == 1)
        {
            if (a+b < b+c)
            {
                cout << (a+b)*c;
            }
            else
            {
                cout << a*(b+c);
            }
            
            
        }
        else
        {
            cout << a*(b+c);
        }
        
        
        
    }
    else
    {
        cout << a*b*c;
    }
    
    
    return 0;
}