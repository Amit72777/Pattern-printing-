
#include<stdio.h>
int main ()
{
    int n=9;
    // printf("Enter the number :");
    // scanf("%d",&n);
    int a=n/2+1;
    int p=a/2+1;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if (i==1||i==n||j==a)
            printf("*");
            else 
            printf(" ");
        }
        printf("\t ");

        int x=1;
        for(int j=1;j<=n;j++)
        {
            
            if ( i>=a&&(i-j==a-1||i+j==a+n)  ||i<=a&&  (  (j<=a&&(j-i==p-1||i+j==p+1))    ||  (j>=a&&(i+x==p+1||x-i==p-1  ))   )  )
            printf(" * ");
            else 
            printf("   ");
            
            if (j<a)x++;
            else x--; 
        }
        printf(" \t ");

        for(int j=1;j<=n;j++)
        {
            if (  i<=a+1&&(j==1||j==n) || i>a&&(i-j==a||i+j==n+a+1)  ||  (i==n&&j==a) )
            printf("*");
            else 
            printf(" ");
        }
        printf("\t ");
        printf("\n");
    }

    return 0;
}