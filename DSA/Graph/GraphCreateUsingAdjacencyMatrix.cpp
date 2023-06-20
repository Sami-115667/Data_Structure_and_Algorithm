#include <bits/stdc++.h>
using namespace std;

void add(int arr [7][7],int source,int dest){
       arr[source][dest]=1;
       arr[dest][source]=1;
}

int main(){

    int v=6;
    int edges=10;
    int arr[7][7];
    add(arr,1,2);
    add(arr,1,3);
    add(arr,1,4);
    add(arr,1,6);
    add(arr,2,3);
    add(arr,4,5);
    add(arr,4,6);

    cout<<arr[1][2]<<endl;
    cout<<arr[2][1]<<endl;


}