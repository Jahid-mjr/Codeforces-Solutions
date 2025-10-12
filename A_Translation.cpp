#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); // Speeds up I/O
    //cin.tie(nullptr);
    string a,b;
    cin >> a >> b;
    reverse(a.begin(), a.end());

    if (a==b)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    
    return 0;
}