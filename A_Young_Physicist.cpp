#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); // Speeds up I/O
    //cin.tie(nullptr);
    int n, m = 0, o = 0, p = 0;
    cin >> n;
    int a[n][3];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        
        m = m + a[i][0];
        
    }
    for (int i = 0; i < n; i++)
    {
        
        o = o + a[i][1];
        
    }
    for (int i = 0; i < n; i++)
    {
        
        p = p + a[i][2];
        
    }


    if (m == 0 && o == 0 && p == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    
    
    

    
    return 0;
}