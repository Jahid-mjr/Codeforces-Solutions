#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); // Speeds up I/O
    //cin.tie(nullptr);
    int T,n,a,b;
    cin >> T;
    while (T--)
    {
        cin >> n;

        a = n/10;
        b = n%10;

        cout << a+b << "\n";

    }
    
    return 0;
}