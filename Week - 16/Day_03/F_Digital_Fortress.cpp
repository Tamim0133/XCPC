#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char s[10000];

        scanf(" %[^\n]", s);

        int l = 0;

        while (s[l] != '\0')
            l++;
        int x = sqrt(l);
        if (x * x == l)
        {
            for (int i = 0; i < x; i++)
            {
                for (int j = i; j < l; j += x)
                {
                    printf("%c", s[j]);
                }
            }
            printf("\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
}