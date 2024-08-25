#include<bits/stdc++.h>
using namespace std;

void countFreq(string str){
   int len = str.length();
   unordered_map<char, int> mp;
   for(int i = 0; i<len; i++){
      if(tolower(str[i])>='a' && tolower(str[i]<='z')){
         mp[tolower(str[i])]++;
      }
   }
   for(auto i: mp){
      cout<<i.first<<i.second<<" ";
   }
}

int main(){
   string str;
   getline(cin, str);
   countFreq(str);
}