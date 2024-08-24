#include<bits/stdc++.h>
using namespace std;

bool automorphic(int n){
   int sqr = pow(n, 2);
   // cout<<n<<" "<<sqr<<endl;
   while(n){
      if(n%10 != sqr%10) return false;
      n = n/10;
      sqr = sqr/10;
   }
   return true;
}

int main(){
   int n;
   cin>>n;
   if(automorphic(n)){
      cout<<"YES"<<endl;
   }else{
      cout<<"NO"<<endl;
   }
}