#include<bits/stdc++.h>
using namespace std;

bool sortele(pair<int, int> a, pair<int, int> b){
   if(a.second == b.second) {
      return a.first<b.first;
   }
   return a.second>b.second;
}

void sortByFreq(vector<int> &arr, int n){
   unordered_map<int, int> mp;
   vector<pair<int, int>> vec;
   int k = 0;

   for(auto i: arr){
      mp[i]++;
   }
   for(auto i: mp){
      vec.push_back({i.first, i.second});
   }
   sort(vec.begin(), vec.end(), sortele);
   for(auto i: vec){
      while(i.second--){
         arr[k++] = i.first;
      }
   }
}

int main(){
   // int n;
   // cin>>n;
   // vector<int> arr(n,0);
   // for(int i = 0; i<n; i++){
   //    cin>>arr[i];
   // }
   int n = 6;
   vector<int> arr = {-199, 6, 7, -199, 3, 5};
   sortByFreq(arr, n);
   for(int i = 0; i<n; i++){
      cout<<arr[i]<<" ";
   }
}