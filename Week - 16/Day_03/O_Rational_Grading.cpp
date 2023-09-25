#include <stdio.h>
#include <math.h>
int decimal_conv(char arr[])
{
    int ans = 0, l = 0;
    while (arr[l] != '\0')
    {
        l++;
    }
    for (int i = l - 1; i >= 0; i--)
    {
        ans += (arr[i] - '0') * pow(10, l - i);
    }
    return ans;
}

int main()
{
    int x, t;
    while (1)
    {
        // char arr[];
        char arr[1000000];
        scanf("%s %d", arr, &t);
        printf("%s %d\n", arr, t);

        if (t == 0)
        {
            break;
        }
        int case1 = 0;
        int case2 = 0;
        int case3 = 0;

        if (arr[0] != 0)
        {
            case1 = 1; // Decimal
        }
        else if (arr[0] == 0 && arr[1] == 'x')
        {
            case3 = 1; // Hexa
        }
        else
        {
            case2 = 1; // Octal
        }

        char s[3];
        int y;
        int ans = 0;
        while (t--)
        {
            scanf("%s %d", s, &y);
            if (case1)
            {
                printf("Number : %d\n", decimal_conv(s));
                if (s[0] == 'i' && s[1] == '\0')
                {
                }
                else if (s[0] == 'i' && s[1] == '+' && s[2] == '+')
                {
                }
                else if (s[0] == '+' && s[1] == '+' && s[2] == 'i')
                {
                }
                else if (s[0] == 'i' && s[1] == '-' && s[2] == '-')
                {
                }
                else if (s[0] == '-' && s[1] == '-' && s[2] == 'i')
                {
                }
            }
        }
    }
}