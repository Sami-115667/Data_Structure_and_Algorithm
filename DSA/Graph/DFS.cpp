#include <bits/stdc++.h>
using namespace std;
const int n=1e5+2;
bool vis[n];
vector<int>adj[n];

void dfs(int node){
    //preorder
    vis[node]=1;
    cout<<node<<" ";


    //inorder
     vector<int> ::iterator  it;
       for(it=adj[node].begin(); it!=adj[node].end();it++){
        if(!vis[*it]){
           dfs(*it);
        }
    }



}
int main (){
  

    int v,e;
    cin>>v>>e;

      for(int i=0;i<v;i++)
    vis[i]=0;

    int source ,dest;
    for(int i=0;i<e;i++)
    {
        cin>>source >>dest;
         adj[source].push_back(dest);
         adj[dest].push_back(source);
    }
    dfs(0);

    

}





