#include<bits/stdc++.h>
using namespace std;

int main(){
   string str;
   getline(cin, str);

   for(int i = 0; i<str.length(); i++){
      if(str[i]==' '){
         str = str.substr(0, i) + str.substr(i+1);
         i--;
      }
   }
   cout<<str<<endl;
}