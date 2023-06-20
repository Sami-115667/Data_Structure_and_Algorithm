#include <bits/stdc++.h>
using namespace std;

void MergeFunction(int arr[], int l, int r, int mid) {
  int n1 = mid - l + 1;
  int n2 = r - mid;
  int a[n1], b[n2];
  for (int i = 0; i < n1; i++)
    a[i] = arr[i + l];
  for (int i = 0; i < n2; i++)
    b[i] = arr[mid + i + 1];
  int sum = n1 + n2;
  j++;
  k++;
}
else if (j == n2) {
  arr[k] = a[i];
  i++;
  k++;
}
else if (a[i] >= b[j]) {
  arr[k] = b[j];
  j++;
  k++;
}
else {
  arr[k] = a[i];
  i++;
  k++;
}
}
}

void MergeSort(int arr[], int l, int r) {
  if (l < r) {
    int mid = (l + r) / 2;
    MergeSort(arr, l, mid);
    MergeSort(arr, mid + 1, r);
    MergeFunction(arr, l, r, mid);
  }
}

void print(int arr[], int n) {
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
}
int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  MergeSort(arr, 0, n - 1);
  print(arr, n);
}