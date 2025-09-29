#include<stdio.h>
int main()
{
    char a[110];
    int count = 0;
    int check;

    scanf("%s",a);    


    for (int i = 0; a[i]!='\0' ; i++)
    {

        check = 0;
        for (int j = i+1; a[j]!='\0' ; j++)
        {
           if (a[i]==a[j])
           {
            check++;
           }
           
        }
        if (check == 0)
        {
            count++;
        }
        
        
    }

    if (count % 2==0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
    
    

    
    return 0;
}