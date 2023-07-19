#include <stdio.h>

void solve()
{
    int a, b, c;
    char temp1, temp2;

    scanf("%d%c%d%c%d", &a, &temp1, &b, &temp2, &c);

    // printf("%d %d %d \n", a, b, c);

    if (a <= 12 && b <= 12)
        printf("BOTH\n");
    else if (a <= 12)
        printf("MM/DD/YYYY\n");
    else
        printf("DD/MM/YYYY\n");
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
}