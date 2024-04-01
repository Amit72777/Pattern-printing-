#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d", &n); // taking input 

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j > n - i)
            {
                printf(" %c ", 2);  
            }
            else
                printf("   ");
        }
        for (int j = 1; j < i; j++)
        {
            if (j < i)
                printf(" %c ", 2);
        }
        printf("\n");
    }

    return 0;
}