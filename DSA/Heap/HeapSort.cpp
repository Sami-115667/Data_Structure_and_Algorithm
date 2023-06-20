#include <bits/stdc++.h>
using namespace std;
#define FAST                                                                   \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

void maxheapify(int arr[], int size, int i) {
  int largest = i;
  int l = (2 * i) + 1;
  int r = l + 1;
  while (l < size && arr[largest] < arr[l]) {
    largest = l;
  }
  while (r < size && arr[largest] < arr[r]) {
    largest = r;
  }
  if (largest != i) {
    swap(arr[largest], arr[i]);
    maxheapify(arr, size, largest);
  }
}

void minheapify(int arr[], int size, int i) {
  int largest = i;
  int l = (2 * i) + 1;
  int r = l + 1;
  while (l < size && arr[largest] > arr[l]) {
    largest = l;
  }
  while (r < size && arr[largest] > arr[r]) {
    largest = r;
  }
  if (largest != i) {
    swap(arr[largest], arr[i]);
    minheapify(arr, size, largest);
  }
}

int main() {

  FAST

       int a[]={15,5,20,1,17,10,30};
       int n=7;
     // int n;
 // cin >> n;
//   int a[n + 2];
//   for (int i = 0; i < n; i++)
//     cin >> a[i];

  for (int i = (n / 2) - 1; i >= 0; i--) {
    maxheapify(a, n, i); // find the maxheap using heapify method
  }

  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
  cout << endl;
 
  for (int i = n - 1; i >= 0; i--) {
    swap(a[i], a[0]);
    maxheapify(a, i, 0); // heapsort
  }

  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
  cout << endl;

  for (int i = (n / 2) - 1; i >= 0; i--) {
    minheapify(a, n, i); // find the minheap using heapify method
  }
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
  cout << endl;

  return 0;
}