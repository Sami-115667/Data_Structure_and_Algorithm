#include <bits/stdc++.h>
using namespace std;
void maxheapify(vector<int> &arr, int size, int i) {
  int largest = i;
  int l = (2 * i) + 1;
  int r = (2 * i) + 2;

  while (l < size && arr[largest] < arr[l]) {
    largest = l;
    // cout << l << endl;
  }

  while (r < size && arr[largest] < arr[r]) {
    largest = r;
    // cout << r << endl;
  }

  if (largest != i) {
    swap(arr[largest], arr[i]);
    maxheapify(arr, size, largest);
  }
}
void minheapify(vector<int> &arr, int size, int i) {
  int largest = i;
  int l = (2 * i) + 1;
  int r = (2 * i) + 2;

  while (l < size && arr[largest] > arr[l]) {
    largest = l;
    // cout << l << endl;
  }

  while (r < size && arr[largest] > arr[r]) {
    largest = r;
    // cout << r << endl;
  }

  if (largest != i) {
    swap(arr[largest], arr[i]);
    maxheapify(arr, size, largest);
  }
}



void InsertInHeap(vector<int> &v, int size, int value) {
    v.push_back(value);
    int i = size;
    while (i > 0) {
        int parent = (i - 1) / 2;
        if (v[parent] < value) {
            swap(v[parent], v[i]);
            i = parent;
        } else {
            return;
        }
    }
}


int main() {
  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  for (int i = (v.size() / 2) - 1; i >= 0; i--)
    maxheapify(v, v.size(), i);
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  cout << endl;

  for (int i = (v.size() / 2) - 1; i >= 0; i--)
    minheapify(v, v.size(), i);
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  cout << endl;

  vector<int> v2 = {10, 5, 6, 2,12, 7, 9}; 
  for (int i = (v2.size() / 2) - 1; i >= 0; i--)
    maxheapify(v2, v2.size() , i);
  for (int i = 0; i < v2.size();i++) 
    cout << v2[i] << " ";
  cout << endl;


  vector<int>v1;
 // v1.push_back(0);
  InsertInHeap(v1, v1.size(), 1);
  InsertInHeap(v1, v1.size(), 2);                 //Insert at heap one by one 
  InsertInHeap(v1, v1.size(), 3);
  //cout<<v1.size()<<endl;
      for(int i=0;i<v1.size();i++)
      cout<<v1[i]<<" "; 
      cout<<endl; 

  return 0;
}