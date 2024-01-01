#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        int n = 1;

        for (int j = 1; j <= a; j++)
        {
            if (j > a - i)
            {
                printf("%c", n + 64);
                n++;
            }
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0; // roumbus pattern
}