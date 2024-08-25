#include<bits/stdc++.h>
using namespace std;

int getline(string str){
   int len = str.length();
   int ans = 0;
   for(int i = 0; i<len; i++){
      string temp;
      while(i<len && (str[i]>='0' && str[i]<='9')){
         temp.push_back(str[i]);
         i++;
      }
      if(temp.length()>0){
         ans += stoi(temp);
      }
   }
   return ans;
}

int main(){
   string str;
   getline(cin, str);
   int ans = getline(str);
   cout<<ans<<endl;
}