#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b = 0, c = 0;
    cin >> a;

    for (int i = 1; ; i++)
    {

        b = (i*(i+1))/2.0 + b;

        if (b > a)
        {
            break;
        }
        
        
        c++;

    }
    

    cout << c << "\n";

    return 0;
}