#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &arr, int n)
{
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
   cout << endl;
}

int secondLargest(vector<int> &arr, int n)
{
   if (n < 2)
      return -1;
   int max1 = arr[0];
   int max2 = INT_MIN;
   for (int i = 1; i < n; i++)
   {
      if (arr[i] > max1)
      {
         max2 = max1;
         max1 = arr[i];
      }
      else if (arr[i] > max2)
      {
         max2 = arr[i];
      }
   }
   return max2;
}

int secondSmallest(vector<int> &arr, int n)
{
   if (n < 2)
      return -1;
   int min1 = arr[0];
   int min2 = INT_MAX;
   for (int i = 1; i < n; i++)
   {
      if (arr[i] < min1)
      {
         min2 = min1;
         min1 = arr[i];
      }
      else if (arr[i] < min2)
      {
         min2 = arr[i];
      }
   }
   return min2;
}

int main()
{
   int n;
   cin >> n;
   vector<int> arr(n, 0);
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   display(arr, n);
   int lg = secondLargest(arr, n);
   int sm = secondSmallest(arr, n);
   cout << lg << " " << sm << endl;
}