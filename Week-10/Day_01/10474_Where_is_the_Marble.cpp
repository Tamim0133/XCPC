
#include <iostream>
#include <algorithm>
#include <array>
#include <bitset>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdint>
#include <complex>
#include <cmath>
#include <chrono>
#include <ctime>
#include <cassert>
#include <list>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <string>
#include <random>

using namespace std;

int main()
{
    int n, q;
    int cs = 1;
    while (cin >> n >> q)
    {

        if (n == 0 and q == 0)
            break;
        cout << "CASE# " << cs << ":" << endl;
        cs++;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        while (q--)
        {
            int x, ans;
            cin >> x;
            auto it = lower_bound(a.begin(), a.end(), x);

            int idx = it - a.begin();

            if (idx == n)
                ans = -1;
            else if (a[idx] != x)
                ans = -1;
            else
                ans = idx + 1;

            if (ans == -1)
                cout << x << " not found" << endl;
            else
                cout << x << " found at " << ans << endl;
        }
    }
}