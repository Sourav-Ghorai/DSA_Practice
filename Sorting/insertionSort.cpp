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

void insertionSort(int arr[], int n)
{
   for(int i = 0; i<n; i++){
      int j = i-1;
      while(j>=0 && arr[j]>arr[j+1]){
         swap(arr[j], arr[j+1]);
         j--;
      }
   }
}

int main()
{
   int arr[] = {1, 3, 4, 2, 5, 7, 3};
   int n = sizeof(arr) / sizeof(arr[0]);
   display(arr, n);
   insertionSort(arr, n);
   display(arr, n);
}