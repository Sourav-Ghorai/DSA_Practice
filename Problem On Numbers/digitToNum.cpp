#include<bits/stdc++.h>
using namespace std;

void digitToNum(int n){
   string singleDigit[] = {"Zero","One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
   string doubleDigit[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
   string tensMultiple[] = {"", "", "Tweenty", "Thirty", "Fourty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
   string hundredMultiple[] = {"Hundred", "Thousand"};

   string num = to_string(n);
   int len = num.length();
   cout<<num<<endl;

   if(len<1){
      cout<<""<<endl;
      return;
   }else if(len==1){
      cout<<singleDigit[num[0]-'0']<<endl;
      return;
   }else{
      for(int i = 0; i<num.length(); i++){
         if(len>2){
            if(num[i]!='0'){
               cout<<singleDigit[num[i]-'0']<<" ";
               cout<<hundredMultiple[len-3]<<" ";
            }
            len--;
         }else{
            if(num[i]=='1'){
               cout<<doubleDigit[num[i+1]-'0']<<" ";
               return;
            }else if(num[i]!='0'){
               cout<<tensMultiple[num[i]-'0']<<" ";
               if(num[i+1]!='0'){
                  cout<<singleDigit[num[i+1]-'0']<<" ";
               }
               return;
            }else{
               if(num[i+1]=='0') return;
               else{
                  cout<<singleDigit[num[i+1]-'0']<<" ";
                  return;
               }
            }
         }
      }
   }

}

int main(){
   int n;
   cin>>n;
   cout<<n<<endl;
   digitToNum(n);
}