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

void leftRotate(vector<int> &arr, int n, int k)
{
   vector<int> temp(n, 0);
   k = n - k;
   for (int i = 0; i < n; i++)
   {
      temp[(k + i) % n] = arr[i];
   }
   display(temp, n);
}

void rightRotate(vector<int> &arr, int n, int k)
{
   vector<int> temp(n, 0);
   for (int i = 0; i < n; i++)
   {
      temp[(k + i) % n] = arr[i];
   }
   display(temp, n);
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
   int k;
   cin >> k;
   leftRotate(arr, n, k);
   rightRotate(arr, n, k);
}