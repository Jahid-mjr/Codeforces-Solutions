#include <bits/stdc++.h>
using namespace std;
int main()
{

    int s;
    cin >> s;

    for (int k = 0; k < s ; k++)
    {
        
    int a;
    cin >> a;
    int b = 0,c= 0;
    int d = a;



    while (1)
    {
       if (a%2 == 0)
       {
        a = a/2;
        b++;
       }
       else
       {
        break;
       }
        
    }
    while (1)
    {
       if (a%3 == 0)
       {
        a = a/3;
        c++;
       }
       else
       {
        break;
       }
        
    }



    if(d == 1)
    {
            cout << 0 << "\n";
            
    }

    else if (a == 1)
    {
        if (b>c)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << b + (2*(c-b)) << "\n";
        }
             
    }
    else
    {
        cout << -1 << "\n";
    }
     


    }
    



    return 0;
}