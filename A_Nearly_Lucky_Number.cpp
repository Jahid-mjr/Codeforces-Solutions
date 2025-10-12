#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); // Speeds up I/O
    //cin.tie(nullptr);
    string a;
    int c  = 0;
    cin >> a;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i]=='4' || a[i] == '7')
        {
           c++;
        }
        
    }
    if (c == 7 || c == 4)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    
    return 0;
}