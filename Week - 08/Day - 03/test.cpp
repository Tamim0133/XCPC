// M Rahman Mithu
#include <stdio.h>

int main()
{
    int v = 0, c = 0, d = 0;
    char ch;
    while (scanf("%c", &ch) != EOF)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                v++;
            }
            else
                c++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            d++;
        }
    }

    printf("vowel:%d\n", v);
    printf("conso:%d\n", c);
    printf("digit:%d\n", d);

    return 0;
}