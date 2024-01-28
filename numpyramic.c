#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number :");  // input size 
    scanf("%d", &n);
    int   b;
    /*
          0
        1 0 1
      2 1 0 1 2
    */
    for (int i = 0; i < n; i++) // loop for rows 
    {
        b = i;
        for (int j = 0; j < n + i + 1; j++) // loop for column 
        {
            // condition for print a block 
            if (j >= n - i)
            {
                printf(" %d ", b); 
                if (j > n - 1)
                    b++;
                else
                    b--;
            }
            else
                printf("   ");
        }
        printf("\n");
    }
    return 0;
}