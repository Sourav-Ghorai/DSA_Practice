#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;
   vector<int> arr(n, 0);
   unordered_map<int, int> mp;
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
      mp[arr[i]]++;
   }
   for (auto i : mp)
   {
      cout << i.first << " " << i.second << endl;
   }
}