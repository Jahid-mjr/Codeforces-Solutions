#include <bits/stdc++.h>


using namespace std;

int main(){


    double a,b,c;
    cin >> a >> b >> c;

   long long int e = ceil(a/c);
   long long int f = ceil(b/c);

   

    cout << e*f << "\n";
    

    return 0;
}