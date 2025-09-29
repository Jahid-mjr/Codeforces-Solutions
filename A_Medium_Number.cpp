#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int a;
    cin >> a;

    for (int  i = 0; i < a; i++)
    {
        
        int a,b,c;
        cin >> a >> b >> c;

        int d = max({a,b,c});
        int e = min({a,b,c});



        
        if (d > a && a > e)
        {
            cout << a << endl;
        }
        else if (d > b && b > e )
        {
            cout << b << endl;
        }
        else if (d > c && c > e)
        {
            cout << c << endl;
        }
        
        
        




    }
    



    return 0;
}