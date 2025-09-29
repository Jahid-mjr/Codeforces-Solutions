#include <bits/stdc++.h>
using namespace std;
int main(){

    // vector <int> d;
    
    long long int a,b;
    cin >> a >> b;

    if (b <= ceil(a/2.0))
    {
        cout << (b*2)-1 << "\n";
    }
    else if (b > ceil(a/2))
    {
        long long int x = b - ceil(a/2.0);
        
        cout << x*2 << "\n";
    }
    
   
    

    // for (int i = 1; i <= a ; i = i + 2)
    // {
    //     d.push_back(i);
    // }
    // for (int i = 2; i <= a; i = i +2)
    // {
    //     d.push_back(i);
    // }
    
    

    // cout << d[b-1] << "\n";


    return 0;
}