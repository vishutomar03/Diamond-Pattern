/*
*
*
*   Author : Vishu Tomar
*   About Program : This program prints the Diamond Pattern.
*    For n=3,
*  
*                  1
*                 121
*                12321
*                 121
*                  1
*
*
*
*/
#include<stdio.h>
int main()
{
    int a,b,c,d,n,j=1;
    printf("Enter the range of the pattern:");
    scanf("%d",&n);
    int v=n;

    for(a=1;a<=n;a++)
    {
        for(d=1;d<v;d++)
            printf(" ");

        for(b=1;b<a;b++)
            printf("%d",b);

         printf("%d",a);

        for(c=a-1;c>0;c--)
            printf("%d",c);

        printf("\n");
        v--;
    }


    for(int f=n-1;f>0;f--,j++)
    {
        for(int k=1;k<=j;k++)
            printf(" ");

        for(int g=1;g<f;g++)
            printf("%d",g);

        printf("%d",f);

        for(int h=f-1; h>0;h--)
            printf("%d",h);

        printf("\n");

    }

    return(0);
}

