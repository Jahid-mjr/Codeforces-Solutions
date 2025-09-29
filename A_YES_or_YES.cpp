#include <bits/stdc++.h>
using namespace std;
int main(){


    int a,c,d,f;
    cin >> a;

    for (int i = 0; i < a; i++)
    {
        c = 0;
        d = 0;
        f = 0;
        string b;
        cin >> b;

        if (b[0] == 'Y' || b[0] == 'y')
        {
           c = 1;
        }
        if (b[1] == 'E' || b[1] == 'e')
        {
            d = 1;
        }
        if (b[2] == 'S' || b[2] == 's')
        {
            f = 1;
        }
        
        
        
        if (c == 1 && d == 1 && f == 1)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
        








    }
    



    return 0;
}