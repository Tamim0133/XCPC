// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long int;

// const int N = (int)1e6 + 5;

// vector<int> adj[N];
// vector<ll> leafs;

// void DFS(int curr, int par)
// {
//     bool hasChild = false;

//     for (auto i : adj[curr])
//     {
//         if (i == par)
//             continue;

//         hasChild = true;

//         DFS(i, curr);

//         leafs[curr] += leafs[i];
//     }

//     if (!hasChild)
//     {
//         leafs[curr] = 1;
//     }
// }

// void solve()
// {
//     int n;
//     cin >> n;

//     for (int i = 0; i <= n; i++)
//     {
//         adj[i].clear();
//     }
//     leafs.assign(n + 2, 0);

//     for (int i = 1; i <= n - 1; i++)
//     {
//         int u, v;
//         cin >> u >> v;

//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     DFS(1, -1);

//     int q;
//     cin >> q;

//     while (q--)
//     {
//         int x, y;
//         cin >> x >> y;

//         ll ans = leafs[x] * leafs[y];
//         cout << ans << endl;
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

const int N = 1e6 + 5;

vector<ll> adj_list[N];
vector<ll> leaf;

void DFS(int cur, int par)
{
    bool leaf_ache = false;
    for (auto i : adj_list[cur])
    {
        if (i == par)
            continue;

        leaf_ache = true;

        DFS(i, cur);

        leaf[cur] += leaf[i];
    }

    if (!leaf_ache)
        leaf[cur] = 1;
}

void solve()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        adj_list[i].clear();
    }

    leaf.assign(n + 2, 0);
    for (int i = 1; i <= n - 1; i++)
    {
        int u, v;
        cin >> u >> v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    DFS(1, -1);

    int q;
    cin >> q;

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        ll ans = leaf[a] * leaf[b];
        cout << ans << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}