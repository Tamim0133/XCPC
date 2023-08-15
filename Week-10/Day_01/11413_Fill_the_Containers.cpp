#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
// #include <bits/>
int main()
{
    int n, m;

    while (cin >> n >> m)
    {
        int arr[n];

        int maxi = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            maxi = max(arr[i], maxi);
        }

        // sort(arr.begin(), arr.end());

        int l = maxi, r = INT_MAX;
        int ans;
        while (l <= r)
        {
            int cap = l + (r - l) / 2;

            int cnt = 1;
            int s = 0;

            for (int i = 0; i < n; i++)
            {
                if (s + arr[i] <= cap)
                {
                    s += arr[i];
                }
                else
                {
                    cnt++;
                    s = arr[i];
                }
            }
            if (cnt <= m)
            {
                ans = cap;
                r = cap - 1;
            }
            else
            {
                l = cap + 1;
            }
        }

        cout << ans << endl;
    }
}