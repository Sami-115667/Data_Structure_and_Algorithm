#include <bits/stdc++.h>
using namespace std;

void Bubble(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1])
            swap(a[j],a[j+1]);
        }
    }

}

void print(int a[], int n){
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Bubble(a, n);
    print(a, n);
    
}