#include<stdio.h>
int main()
{
    int n,a,x,y;
    printf(" Enter the size of a swastik : ");
    scanf("%d",&n);
    if ( n%2!=0) a=n/2+1;
    else a=n/2;
     int b= (1+a)/2 ;
     int c = ( a+n)/2;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if( i==a || j>a&&i==1 || j==a || i==n&&j<=a || i>a && j==n  || i<=a&&j==1 || ( i==b||i==c)&&(j==b||j==c) )
            printf(" \4 ");
            else 
            printf("   ");
        }
        printf("\n");
    }
    return 0;
}