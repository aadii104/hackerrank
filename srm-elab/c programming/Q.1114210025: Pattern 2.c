
#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n + 1; i++)
    {
        for (j = (i); j < n + 1; j = j + 1)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}