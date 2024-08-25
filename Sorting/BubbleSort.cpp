#include<bits/stdc++.h>
using namespace std;

void display(int arr[], int n){
   for(int i = 0; i<n; i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}

void bubbleSort(int arr[], int n){
   int flag = 1;
   for(int i = 0; i<n; i++){
      flag = 1;
      for(int j = 0; j<n-i-1; j++){
         if(arr[j]>arr[j+1]){
            int t = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = t;
            flag = 0;
         }
      }
      if(flag) break;
   }
}

int main(){
   int arr[] = {1,3,4,2,5,7,3};
   int n = sizeof(arr) / sizeof(arr[0]);
   display(arr, n);
   bubbleSort(arr, n);
   display(arr, n);
}