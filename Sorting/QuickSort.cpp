#include<bits/stdc++.h>
using namespace std;

void display(int arr[], int n)
{
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
   cout << endl;
}

int partition(int arr[], int start, int end){
   int pivot = arr[start];
   int i = start+1;
   int j = end;
   while(i<j){
      while(i<end && arr[i]<=pivot) i++;
      while(j>start && arr[j]>=pivot) j--;
      if(i<j) swap(arr[i], arr[j]);
   }
   swap(arr[start], arr[j]);
   return j;
}

void quickSort(int arr[], int start, int end)
{
   if(start<end){
      int position = partition(arr, start, end);
      quickSort(arr, start, position-1);
      quickSort(arr, position+1, end);
   }
}

int main()
{
   int arr[] = {1, 3, 4, 2, 5, 7, 3};
   int n = sizeof(arr) / sizeof(arr[0]);
   display(arr, n);
   quickSort(arr, 0, n-1);
   display(arr, n);
}