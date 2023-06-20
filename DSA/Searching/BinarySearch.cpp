#include <bits/stdc++.h>
using namespace std;

void Binary (int a[],int size,int key){
    bool s=false;
    int low=0,high=size-1;
  
    while(low<=high){
          int mid=(low+high)/2;   // Only for Sorted array
        if(a[mid]==key)
       { s=true;break;}
        else if(a[mid]>key)
        high=mid-1;
        else
         low=mid+1;
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
    Binary(arr, n, 5);
}