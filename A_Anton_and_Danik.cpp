#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, c = 0,d = 0;
    string b;
    cin >> a;
    cin >> b;

    for (int i = 0; i < a; i++)
    {
        
        if (b[i] == 'A')
        {
            c++;
        }
        else
        {
            d++;
        } 


    }
    

    if (c > d)
    {
        cout << "Anton" << "\n";
    }
    else if (c < d)
    {
        cout << "Danik" << "\n";
    }
    else
    {
        cout << "Friendship" << "\n";
    }
    



    
    return 0;
}