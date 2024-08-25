#include<bits/stdc++.h>
using namespace std;

int main(){
   string str;
   getline(cin, str);
   int len = str.length();
   for(int i = 0; i<len; i++){
      str[i] = tolower(str[i]);
   }
   
   int vowel = 0, consonent = 0, space = 0;
   for(auto i: str){
      if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u') vowel++;
      else if(i>='a' && i<='z') consonent++;
      else if (i==' ') space++;
   }

   cout<<vowel<<" "<<consonent<<" "<<space<<endl;
}