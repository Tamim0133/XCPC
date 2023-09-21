#include <stdio.h>
#include <math.h>
int length(char arr[])
{
    int l = 0;
    while (arr[l] != '\0')
    {
        l++;
    }
    return l;
}

int main()
{
    char arr[100];
    int ans = 0;

    while (scanf("%s", arr) != EOF)
    {
        int l = length(arr);
        char a[3], b[3], c[3];
        int la = 0, lb = 0, lc = 0;
        int temp = 0;
        for (int i = 0; i < l; i++)
        {
            if (arr[i] >= '0' && arr[i] <= '9')
            {
                a[la] = arr[i];
                la++;
            }
            else
                break;
        }
        char op = arr[la];
        // printf("operation : %c\n", op);
        for (int i = la + 1; i < l; i++)
        {
            if (arr[i] >= '0' && arr[i] <= '9')
            {
                b[lb] = arr[i];
                lb++;
            }
            else
            {
                temp = i;
                break;
            }
        }
        for (int i = temp + 1; i < l; i++)
        {
            if (arr[i] >= '0' && arr[i] <= '9')
            {
                c[lc] = arr[i];
                lc++;
            }
        }

        int x = 0, y = 0, z = 0;

        for (int i = 0; i < la; i++)
        {
            x += (a[i] - '0') * pow(10, la - i - 1);
            // printf("%c", a[i]);
        }
        // printf(" ");

        for (int i = 0; i < lb; i++)
        {
            y += (b[i] - '0') * pow(10, lb - i - 1);

            // printf("%c", b[i]);
        }
        // printf(" ");

        for (int i = 0; i < lc; i++)
        {
            z += (c[i] - '0') * pow(10, lc - i - 1);

            // printf("%c", c[i]);
        }
        // printf("\n");

        // printf("x : %d\n", x);
        // printf("y : %d\n", y);
        // printf("z : %d\n", z);
        if (op == '+')
        {
            if (x + y == z)
            {
                ans++;
            }
        }
        else
        {
            if (x - y == z)
            {
                ans++;
            }
        }
    }
    printf("%d\n", ans);
}