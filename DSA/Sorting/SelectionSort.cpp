#include <bits/stdc++.h>
using  namespace std;

void Selection(int a[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=1+i;j<n;j++){
            if(a[min]>a[j])
             min=j;
        }

        if(i!=min)
        swap(a[i],a[min]);
        
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
    Selection(a, n);
    print(a, n);
}