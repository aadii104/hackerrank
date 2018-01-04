#include <stdio.h>

int countDigit(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}

// Driver code
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d", countDigit(n));
    return 0;
}