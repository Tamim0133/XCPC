#include <stdio.h>

int main()
{
    char a[100000];
    int counter = 0;
    while (scanf("%c", &a[counter]) != EOF)
    {
        counter++;
    }
    int n = 0;
    for (n;; n++)
    {
        if (n * n >= counter)
            break;
    }
    int pos = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (pos <= counter - 1)
            {
                printf("%c", a[pos]);
                pos++;
            }
            else
                printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            if (pos <= counter - 1)
            {
                printf("%c", a[pos]);
                pos++;
            }
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}