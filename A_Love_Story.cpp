#include <bits/stdc++.h>
using namespace std;
int main(){

    int a;
    cin >> a;
    
    for (int i = 0; i < a; i++)
    {
        
        int c = 0;
        string b;
        cin >> b;

        if (b[0] != 'c' )
        {
            c++;
        }
        if (b[1] != 'o' )
        {
            c++;
        }
        if (b[2] != 'd' )
        {
            c++;
        }
        if (b[3] != 'e' )
        {
            c++;
        }
        if (b[4] != 'f' )
        {
            c++;
        }
        if (b[5] != 'o' )
        {
            c++;
        }
        if (b[6] != 'r' )
        {
            c++;
        }
        if (b[7] != 'c' )
        {
            c++;
        }
        if (b[8] != 'e' )
        {
            c++;
        }
        if (b[9] != 's' )
        {
            c++;
        }

        cout << c << "\n"; 



    }
    


    return 0;

}