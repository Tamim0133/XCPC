#include <stdio.h>

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
    float c = 12.01;
    float h = 1.008;
    float o = 16.00;
    float n = 14.01;

    int k;
    scanf("%d", &k);

    while (k--)
    {
        char arr[100];
        scanf("%s", arr);

        int l = length(arr);
        float ans = 0;
        for (int i = 0; i < l; i++)
        {
            if (arr[i] == 'C' || arr[i] == 'H' || arr[i] == 'O' || arr[i] == 'N')
            {
                if (i + 1 == l || arr[i + 1] == 'C' || arr[i + 1] == 'H' || arr[i + 1] == 'O' || arr[i + 1] == 'N')
                {
                    if (arr[i] == 'C')
                        ans += c;
                    else if (arr[i] == 'H')
                        ans += h;
                    else if (arr[i] == 'O')
                        ans += o;
                    else
                        ans += n;
                }
                else
                {
                    int num[2];
                    num[0] = 0;
                    num[1] = 0;

                    num[0] = arr[i + 1] - '0';
                    if (i + 2 < l && (arr[i + 2] <= '9' and arr[i + 2] >= '0'))
                        num[1] = arr[i + 2] - '0';

                    int number = 0;
                    if (num[1])
                        number += (num[0]) * 10;
                    else
                        number += (num[0]);

                    number += (num[1]);

                    // printf("number : %d ", number);
                    // printf("%d ", num[0]);
                    // printf("%d ", num[1]);
                    // printf("\n");
                    if (arr[i] == 'C')
                        ans += (float)(c * (float)number);
                    else if (arr[i] == 'H')
                        ans += (float)(h * (float)number);
                    else if (arr[i] == 'O')
                        ans += (float)(o * (float)number);
                    else
                        ans += (float)(n * (float)number);
                }
            }
        }
        printf("%.3f\n", ans);
        // printf("\n");
    }
}