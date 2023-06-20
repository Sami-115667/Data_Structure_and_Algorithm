#include <bits/stdc++.h>
using  namespace std;

void Insertion(int a[],int n){
    for(int i=1;i<n;i++){
        int j=i;
        while(j>0 && a[j-1]>a[j])
        {
            swap(a[j-1],a[j]);
            j--;
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
    Insertion(a, n);
    print(a, n);
}