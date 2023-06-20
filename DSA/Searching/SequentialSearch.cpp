#include <bits/stdc++.h>
using namespace std;

void Sequential (int a[],int size,int key){
    bool s=false;
    for(int i=0;i<size;i++){
        if(a[i]==key)
        s=true;

    }
    if(s)
    cout<<"The key element is found in the array"<<endl;
    else
    cout<<"The key element is not found in the array"<<endl;
}


int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
    Sequential(arr, n, 5);
}