#include <bits/stdc++.h>
using namespace std;
int main(){


    int n, a = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        
        int b,c;
        cin >> b >> c;
        if((b+2) <= c){
            a++;
        }
    }
    

    cout << a << "\n";

    return 0;
}