#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); // Speeds up I/O
    //cin.tie(nullptr);
    int a;
    cin >> a;
    if (a%2 == 0)
    {
        a = a/2;
       cout << a << "\n";
       for (int i = 0; i < a; i++)
       {
        cout << 2 << " ";
       }
       
    }
    else
    {
        a = a+1;
        a = a/2;
        a = a - 2;

        cout << a+1 << "\n";
        for (int i = 0; i < a; i++)
        {
            cout << 2 << " ";
        }
        cout << 3;
        

    }
    
    
    return 0;
}