#include <stdio.h>
int main()
{

    int col = 17;
    int row = 6, nos=2;
    int a = 0,n=5; 

    
    for (int i = 1; i <= 3; i++)
    {
        

        for (int j = 1; j <= row; j++)
        {
            if (j<=nos) printf(" ");
            else  printf("%c",3);
        }
        row++;
        nos--;

    

        for (int j = 1; j <= 9; j++)
        { if (j<=n) printf(" ");
        else  printf("%c",3);
        }
        
        n-=2;

        printf("\n");
    }


    for (int i = 1; i <= 9; i++)
    {
        
        for (int j = 1; j <= col; j++)
        {
            if (i==j||i<j)
            printf("%c",3);
            else 
            printf(" ");
        }
        col --;

        printf("\n");
    }
    
  
    
    return 0;
}
