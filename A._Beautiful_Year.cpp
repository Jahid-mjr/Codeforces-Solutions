#include <bits/stdc++.h>

int bye (int a);

using namespace std;
int main(){

    int n;
    cin >> n;
    int m = n+1;

   
    while (1)
    {

        if (bye(m) == 0)
        {

            break;
        }
        else{

            m++;
        }

        
    }


    cout << m;
    
   

    


 

    return 0;
}

int bye (int a){

    int m = 0;
    int b = a%10;
    int c = ((a%100) - (b))/10;
    int d = ((a%1000) - (a%100))/100;
    int f = ((a) - (a%1000))/1000;

   

    if (b == c || b == d || b == f)
    {
        m = 1;
    }
    else if (c == d || c == f )
    {
        m = 1;
    }
    else if (d == f)
    {
        m = 1;
    }
    else{

    }


    if (m == 0)
    {
        return 0;
    }
    else{
        
        return 1;

    }
    


}