#include<stdio.h>
int main()
{

    char b[101];
    scanf("%s",b);


    int cap = 0, sma = 0;
    for (int i = 0; b[i] != '\0'; i++)
    {

       

        if ('A' <= b[i] && b[i] <= 'Z')
        {
            
           cap++;
        }
        else if ('a' <= b[i] && b[i] <= 'z')
        {
            sma++;
        }
        else
        {
            
        }
        
        
        
    }


    if (cap == sma)
    {
        for(int i = 0; b[i] != '\0' ; i++){


        if ('A' <= b[i] && b[i] <= 'Z')
        {
            b[i] = b[i] + 32;
        }            
            


        }
    }
    else if (cap < sma)
    {
        for(int i = 0; b[i] != '\0' ; i++){


        if ('A' <= b[i] && b[i] <= 'Z')
        {
            b[i] = b[i] + 32;
        }            
            


        }
    }
    else{


        for(int i = 0; b[i] != '\0' ; i++){


        if ('a' <= b[i] && b[i] <= 'z')
        {
            b[i] = b[i] - 32;
        }            
            


        }

    }

    printf("%s",b);
    
    
    
    

    return 0;
}