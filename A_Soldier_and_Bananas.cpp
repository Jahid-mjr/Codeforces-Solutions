#include <bits/stdc++.h>
using namespace std;
int main(){


    int k,n,w;
    cin >> k >> n >> w;

    int p = k;

    for (int i = 2; i <= w ; i++)
    {
        
        k = k + (p*i);
        
    }
    
    if (k > n)
    {
        cout << k - n << "\n";
    }
    else if (k <= n)
    {
        cout << 0 << "\n";
    }
    
    
    
    

    


    return 0;
}                                                      