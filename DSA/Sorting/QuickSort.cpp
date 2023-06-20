#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int low, int high ){
    int pivot= arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[high]);
    return i;
}

void Quicksort(int arr[],int low ,int high)
{
    if(low<high){
        int pi=partition( arr,low, high);
        Quicksort(arr, low, pi-1);
        Quicksort(arr, pi+1, high);
    }
}




void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
int main (){
    int n;
    cin>>n;
    int arr[n];
    for(int
     i=0;i<n;i++)
    cin>>arr[i];

   Quicksort(arr, 0, n-1);
    print(arr, n);

}