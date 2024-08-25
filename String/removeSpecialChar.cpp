#include<bits/stdc++.h>
using namespace std;

string remove(string str){
   string ans;
   int len = str.length();
   for(int i = 0; i<len; i++){
      if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
         ans.push_back(str[i]);
      }
   }
   return ans;
}

int main(){
   string str = "Take12% *&U ^$#Forward";
   string ans = remove(str);
   cout<<ans<<endl;
}