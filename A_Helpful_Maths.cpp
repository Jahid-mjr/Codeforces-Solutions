#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); // Speeds up I/O
    //cin.tie(nullptr);
    string a;
    vector <char> b;
    cin >> a;

    for (int i = 0; i <= a.size(); i+=2)
    {
        b.push_back(a[i]);
    }
    
    sort(b.begin(),b.end());

    for (int i = 0; i <= b.size()-1; i++)
    {
        cout << b[i];
        
        if (i != b.size()-1)
        {
            cout << '+';
        }
        
    }


    return 0;
}