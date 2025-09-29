#include <bits/stdc++.h>

using namespace std;
int main(){


    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a,b,c = 0;
        cin >> a >> b;
        int d = 60-b;
        if (a==0)
        {
            c = 1380+d;
        }
        else if (b==0)
        {
            c = 24-a;
            c = c*60;
        }
        else if (a == 23)
        {
            c = d;
        }
        
        else
        {
            c = 23-a;
            c = c*60;
            c= c+ d;
        }


        printf("%i\n",c);
        
        
    }
    

    return 0;
}