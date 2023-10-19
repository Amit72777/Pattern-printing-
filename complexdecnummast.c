#include<stdio.h>
int main()
{
 int n,p;
 printf("Enter the number :");
 scanf("%d",&n);
  p=2*n-1;
  int a=n;
 for (int  i = p; i >=1; i--)
 {
   int b=n;

    for(int j=p ;j>=1;j--)
    {       
         
         if( a>   b) printf(" %d ",a);
         else printf(" %d ",b);

           if(j <=n )
           b++;
         else 
         b--;

       
                         
    }

       if (i<=n) a++;  
        else a--;   
   
    printf("\n");
 }
 
}