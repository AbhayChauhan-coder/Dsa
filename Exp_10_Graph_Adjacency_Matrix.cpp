#include <iostream>
using namespace std;
const int MAX=10;
class Graph{int n,adj[MAX][MAX];public:Graph(int vertices):n(vertices){for(int i=0;i<n;i++)for(int j=0;j<n;j++)adj[i][j]=0;}
 void addEdge(int u,int v){if(u<0||v<0||u>=n||v>=n){cout<<"Invalid vertex\n";return;}adj[u][v]=1;adj[v][u]=1;}
 void display(){cout<<"Adjacency Matrix:\n    ";for(int j=0;j<n;j++)cout<<j<<" ";cout<<"\n";for(int i=0;i<n;i++){cout<<i<<": ";for(int j=0;j<n;j++)cout<<adj[i][j]<<" ";cout<<"\n";}}
 void degrees(){for(int i=0;i<n;i++){int d=0;for(int j=0;j<n;j++)d+=adj[i][j];cout<<"Degree of vertex "<<i<<" = "<<d<<"\n";}}};
int main(){Graph g(5);g.addEdge(0,1);g.addEdge(0,4);g.addEdge(1,2);g.addEdge(1,3);g.addEdge(1,4);g.addEdge(2,3);g.display();g.degrees();return 0;}
