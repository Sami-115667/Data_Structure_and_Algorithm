#include <bits/stdc++.h>
using namespace std;
const int n=1e5+2;
bool vis[n];
vector<int>adj[n];
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

    queue<int>q;

    q.push(0);
    vis[0]=true;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        cout<<node<<endl;

       vector<int> ::iterator  it;
       for(it=adj[node].begin(); it!=adj[node].end();it++){
        if(!vis[*it]){
            vis[*it]=1;
            q.push(*it);
        }
       }


    }


}






























// // BFS algorithm in C++

// #include <iostream>
// #include <list>

// using namespace std;

// class Graph {
//   int numVertices;
//   list<int>* adjLists;
//   bool* visited;

//    public:
//   Graph(int vertices);
//   void addEdge(int src, int dest);
//   void BFS(int startVertex);
// };

// // Create a graph with given vertices,
// // and maintain an adjacency list
// Graph::Graph(int vertices) {
//   numVertices = vertices;
//   adjLists = new list<int>[vertices];
// }

// // Add edges to the graph
// void Graph::addEdge(int src, int dest) {
//   adjLists[src].push_back(dest);
//   adjLists[dest].push_back(src);
// }

// // BFS algorithm
// void Graph::BFS(int startVertex) {
//   visited = new bool[numVertices];
//   for (int i = 0; i < numVertices; i++)
//     visited[i] = false;

//   list<int> queue;

//   visited[startVertex] = true;
//   queue.push_back(startVertex);

//   list<int>::iterator i;

//   while (!queue.empty()) {
//     int currVertex = queue.front();
//     cout << "Visited " << currVertex << " ";
//     queue.pop_front();

//     for (i = adjLists[currVertex].begin(); i != adjLists[currVertex].end(); ++i) {
//       int adjVertex = *i;
//       if (!visited[adjVertex]) {
//         visited[adjVertex] = true;
//         queue.push_back(adjVertex);
//       }
//     }
//   }
// }

// int main() {
//   Graph g(4);
//   g.addEdge(0, 1);
//   g.addEdge(0, 2);
//   g.addEdge(1, 2);
//   g.addEdge(2, 0);
//   g.addEdge(2, 3);
//   g.addEdge(3, 3);

//   g.BFS(2);

//   return 0;
// }

