#include<bits/stdc++.h>
using namespace std;

//Without using reverse function

string reverseWord(string str){
   string ans = "";
   int n = str.length();

   for(int i = 0; i<n; i++){
      if(str[i]==' ') ans = str[i]+ans;
      else{
         string temp = "";
         while(i<n && str[i]!=' '){
            temp += str[i]; i++;
         }
         ans = temp + ans;
         i--;
      }
   }
   return ans;
}

//Using Reverse function

// string reverseWord(string str){
//    int n = str.length();
//    reverse(str.begin(), str.end());
//    for(int i = 0; i<n; i++){
//       int j = i;
//       while(j<n && str[j]!=' ') j++;
//       reverse(str.begin()+i, str.begin()+j);
//       i = j;
//    }
//    return str;
// }

int main(){
   string str = "this is an amazing   program";
   string ans = reverseWord(str);
   cout<<ans<<endl;
   // cout<<str.length()<<" "<<ans.length()<<endl;
}