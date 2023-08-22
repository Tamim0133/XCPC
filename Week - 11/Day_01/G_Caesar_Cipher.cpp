#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d", &n);

    char arr[n];

    scanf("%s", arr);
    scanf("%d", &k);
    k %= 26;  // 26 bar er beshi bar rotate korle 26 er jonno ja chilo tai chole ashe 

    for (int i = 0; i < n; i++)
    {
        int x = arr[i]; // Akta different variable e ami character er ascii value ta rakhtechi . Age jeta kortechilam oita hoilo char er ascii value er sathe direct jog kortechilam . Akhon character er ascii value 122 tar sathe 10 jog korle oita chole jbe 127 er baire . Jeita unbounded . Ai jonno code ta kaj kortechilo na . Amra jeta korte pari sheita hoilo amra charac er ascii value ta age arekta vlaue to boshai rakhbo . Oita plus minus kore kaj korbo . Taile ar unbounded hobar chance thakbe na . 
        if (arr[i] >= 65 && arr[i] <= 90)
        {
            x += k;
            if (x > 90)
                x -= 26;
        }
        if (arr[i] >= 97 && arr[i] <= 122)
        {
            x += k;
            if (x > 122)
                x -= 26;
        }
        arr[i] = x;
    }

    printf("%s", arr);
}