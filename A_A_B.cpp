#include <bits/stdc++.h>
using namespace std;
int main(){


    int r;
    cin >> r;

    // int n = r;
    // a[3] man disilam tai overflow hossilo buffer overflow bole

    for (int i = 0; i < r; i++)
    {

    char a[5];
    scanf("%s",a);
    int b = (int)a[0] - 48;
    int c = (int)a[2] - 48;
    cout << b+c << endl;

    }



    return 0;
}