#include<stdio.h>

void swap(int arr[], int i, int j){
   int t = arr[i];
   arr[i] = arr[j];
   arr[j] = t;
}

int partition(int arr[], int low, int high){
   int pivot = arr[low];
   int i = low, j = high;
   while(i<j){
      while (arr[i] <= pivot && i < high) i++;
      while(arr[j]>=pivot && j>low) j--;
      if(i<j) swap(arr, i, j);
   }
   swap(arr, low, j);
   return j;
}

void quickSort(int arr[], int low, int high){
   if(low<high){
      int pivotPosition = partition(arr, low, high);
      quickSort(arr, low, pivotPosition-1);
      quickSort(arr, pivotPosition+1, high);
   }
}

int main(){
   int arr[] = {3, 5, 1, 7, 3, 8, 4,3,3,3,4,4,5,56,6,7,1,2};
   int n = sizeof(arr) / sizeof(arr[0]);
   quickSort(arr, 0, n - 1);
   printf("The Sorted Array is: ");
   int i;
   for (i = 0; i < n; i++)
   {
      printf("%d ", arr[i]);
   }
}