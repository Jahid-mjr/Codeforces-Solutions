#include<stdio.h>
int main()
{
    int a,st = 0;
    scanf("%i",&a);

    for (; ; )
    {
        if (a==0)
        {
            break;
        }
        
        else if (a>=5)
        {
            a = a-5;
            st++;
        }
        else if (a==4)
        {
            a = a-4;
            st++;
        }
        else if (a==3)
        {
            a = a-3;
            st++;
        }
        else if (a==2)
        {
            a=a-2;
            st++;
        }
        else if (a==1)
        {
            a=a-1;
            st++;
        }
        
        
        
    }
    
    printf("%i",st);


    return 0;
}