#include<stdio.h> 
int  fact(int x)
{
    int f=1;
    for(int  i=1;i<= x;i++)
    f=f*i;

    return f;
}
int main()
{
    int n,m;
    int  ncr;
    printf(" Enter the number of row :");
    scanf("%d",&n);
    m=n-1;
   for(int i=0;i<n;i++)
   {
    for(int j=1;j<=m;j++)
    {
        printf(" ");
    }
    for(int j=0;j<=i;j++)
    {
        ncr= fact(i)/(fact(j)*fact(i-j));
        printf(" %d ",ncr); 
    }
    printf("\n");
    m--;
   }


    return 0;
}