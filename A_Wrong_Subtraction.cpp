#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); // Speeds up I/O
    //cin.tie(nullptr);
    int a,b;
    cin >> a >> b;

    for (int i = 0; i < b; i++)
    {
        if (a%10 == 0)
        {
            a = a/10;
        }
        else
        {
            a  = a - 1;
        }
        
    }
    cout << a;
    
    return 0;
}