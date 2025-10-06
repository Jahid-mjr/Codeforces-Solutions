#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,c= 0;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        string b;
        cin >> b;

        if (b == "X++" || b == "++X" )
        {
            c++;
        }
        else if (b == "X--" || b == "--X" )
        {
            c--;
        }
                
    }


    cout << c << "\n";
    
    return 0;
}