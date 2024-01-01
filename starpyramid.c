#include <stdio.h>
int main()
{
    int n, a,star;
    printf("Enter the number ");
    scanf("%d", &n);
    a = n - 1;
    star=n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= star ; j++)
        {
            if (j > a)
                printf("*");
            else
                printf(" ");
        }
        a--;
        star++;
        printf("\n");
    }

    return 0;
}