#include <stdio.h>
int main()
{
    int m;
    printf("Enter the  odd number :");
    scanf("%d", &m);
    
    if(m%2==0) m++;
    int num = 1, g = m / 2 + 1;

    for (int i = 1; i <= m; i++) // for  spaces
    {
        for (int j = 1; j < g; j++)
        {

            printf("   ");
        }

        for (int j = 1; j <= num; j++) // for star
        {

            printf(" %c ",4);
        }

        if (i >= m / 2 + 1)
        {
            num = num - 2;
            g++;
        }
        else
        { 
            num = num + 2;
            g--;
        }   
        printf("\n");
    }

    return 0;
}