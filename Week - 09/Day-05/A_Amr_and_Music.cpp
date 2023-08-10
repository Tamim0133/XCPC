#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n, k;
   cin >> n >> k;

   vector<int>ans;

   vector<pair <int ,int>> v(n);

   for(int i= 0; i < n; i++)
   {
      cin >> v[i].first;
      v[i].second = i;
   }

   sort(v.begin(), v.end());
   int i = 0;
   while(k > 0 and i < n)
   {
      if(k - v[i].first >= 0)
      {
         ans.push_back(v[i].second + 1);
         k-= v[i++].first;
      }
      else 
      {
         i++;
      }
   }

   //for(auto i : v)
   //cout << i.first << " " << i.second+1 <<endl;
   cout << ans.size() << endl;
   for(auto i : ans)
   cout << i << " ";
   cout << endl;
}