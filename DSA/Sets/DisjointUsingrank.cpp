#include <bits/stdc++.h>
using namespace std;

// vector<int>parent;
int parent[5];
 int size[5];


void make(int v) {
 
  parent[v] = v;
  size[v]=1;
}


int find_pathcompression(int v) {
  if (v == parent[v]) // time complexity O(logN)
    return v;
  return parent[v] = find_pathcompression(parent[v]);
}

void Union_rank(int a,int b){
     int a1 = find_pathcompression(a);
     int a2 = find_pathcompression(b);
     if (a1 != a2) {
        if(size[a1]<size[a2]){
            swap(a1,a2);
        }
        parent[a2]=a1;
        size[a1]+=size[a2];
     }
}



int main() {
  //vector<int> v;
  // cout<<v[0]<<endl;

    for (int i = 1; i <= 4; i++) {
    int x;
    cin >> x;
    make(x);
  }

  //  make(v);

  cout << parent[1] <<" ";
  cout << parent[2] <<" ";
  cout << parent[3] <<" ";
  cout << parent[4] <<" ";
  cout<<endl;

  Union_rank(1, 2);

  cout << parent[1] <<" ";
  cout << parent[2] <<" ";
  cout << parent[3] <<" ";
  cout << parent[4] <<" ";
  cout<<endl;

  Union_rank(3, 4);

  cout << parent[1] <<" ";
  cout << parent[2] <<" ";
  cout << parent[3] <<" ";
  cout << parent[4] <<" ";
  cout<<endl;
  
   Union_rank(2, 3);

  cout << parent[1] <<" ";
  cout << parent[2] <<" ";
  cout << parent[3] <<" ";
  cout << parent[4] <<" ";
  cout<<endl;
}