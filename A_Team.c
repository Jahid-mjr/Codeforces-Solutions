#include<stdio.h>
int main()
{
    int a;
    scanf("%i",&a);
    int b[3];
    int r =0;

    for (int i = 0; i < a; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            scanf("%i",&b[k]);
        }

        if (b[0]==1 && b[1]==1 )
        {
            r = r+1;
        }
        else if (b[1]==1 && b[2]==1)
        {
            r = r+1;
        }
        else if (b[0]==1 && b[2]==1)
        {
            r = r+1;
        }
        else
        {
            
        }
        
        
    }
    
    printf("%i",r);
    return 0;
}