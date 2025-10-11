#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); // Speeds up I/O
    //cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
    int l,r,d,u;
    cin >> l >> r >> d >> u;
    
    if (pow(u+d,2) == pow(r+l,2))
    {
        l = pow(l,2);
        r = pow(r,2);
        d = pow(d,2);
        u = pow(u,2);

        if ((r+u) == (l+u) && (l+u) == (l+d) && (l+d) == (d+r) && (d+r)==(r+u) )
        {
            cout << "Yes" << "\n";
        }
        else
    {
        cout << "No" << "\n";
    }
        

        
    }
    else
    {
        cout << "No" << "\n";
    }
    
    

    }
    
    
    return 0;
}