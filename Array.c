#include<stdio.h>
int main()
{
    int a,b=0,c=0,d=0,e=0,i,num[25];
    printf("enter 25 numbers");
    for(i=0;i<=24;i++)
    {
        scanf("%d",&num[i]);
    }
    for(a=0;a<25;a++)
    {
        if(num[a]<0)
        {
            b++;
        }
    }
    for(a=0;a<=24;a++)
    {
        printf("%d",num[a]);
    }
    
    printf("\nNumber of negative entry %d",b);   
    for(a=0;a<25;a++)
    {
        if(num[a]>0)
        {
            c++;
        }
    }
    printf("\nPositive entery %d",c);

    for(a=0;a<25;a++)
    {
        if(num[a]%2==0)
        {
            d++;
        }
    }
    printf("\neven entery are %d",d);

    for(a=0;a<25;a++)
    {
        if(num[a]%2==!0)
        {
            e++;
        }
    }
    printf("\nOdd entery are %d",e);
}