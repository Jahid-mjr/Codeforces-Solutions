#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); // Speeds up I/O
    //cin.tie(nullptr);
    string a,b;
    cin >> a >> b;

    for (int i = 0; i < a.size(); i++)
    {
        if ('a' <= a[i] && a[i] <= 'z')
    {
        a[i] = (a[i] - 32);
    }

    }
    for (int i = 0; i < b.size(); i++)
    {
        if ('a' <= b[i] && b[i] <= 'z')
    {
        b[i] = (b[i] - 32);
    }

    }

    if (a<b)
    {
        cout << -1;
    }
    else if (a>b)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    
    
    
    

    return 0;
}