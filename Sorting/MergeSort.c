#include <stdio.h>

void merge(int arr[], int low, int mid, int high)
{
   int temp[high - low + 1];
   int i = low, j = mid + 1;
   int k = 0;

   while (i <= mid && j <= high)
   {
      if (arr[i] <= arr[j])
      {
         temp[k] = arr[i];
         i++;
         k++;
      }
      else
      {
         temp[k] = arr[j];
         j++;
         k++;
      }
   }
   while (i <= mid)
   {
      temp[k] = arr[i];
      i++;
      k++;
   }
   while (j <= high)
   {
      temp[k] = arr[j];
      j++;
      k++;
   }
   for (i = low; i <= high; i++)
   {
      arr[i] = temp[i - low];
   }
}

void mergeSort(int arr[], int low, int high)
{
   if (low < high)
   {
      int mid = (low + high) / 2;
      mergeSort(arr, low, mid);
      mergeSort(arr, mid + 1, high);
      merge(arr, low, mid, high);
   }
}

int main()
{
   int arr[] = {3, 5, 1, 7, 3, 8, 4};
   int n = sizeof(arr) / sizeof(arr[0]);
   mergeSort(arr, 0, n - 1);
   printf("The Sorted Array is: ");
   int i;
   for (i = 0; i < n; i++)
   {
      printf("%d ", arr[i]);
   }
}