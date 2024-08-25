#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int n)
{
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
   cout << endl;
}

void selectionSort(int arr[], int n)
{
   for(int i = 0; i<n; i++){
      int mini = arr[i];
      int index = i;
      for(int j = i+1; j<n; j++){
         if(arr[j]<mini){
            mini = arr[j];
            index = j;
         }
      }
      swap(arr[i], arr[index]);
   }
}

int main()
{
   int arr[] = {1, 3, 4, 2, 5, 7, 3};
   int n = sizeof(arr) / sizeof(arr[0]);
   display(arr, n);
   selectionSort(arr, n);
   display(arr, n);
}