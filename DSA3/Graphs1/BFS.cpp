#include <iostream>
#include <queue>
using namespace std;
void print(bool **edges, long long v, long long sv, bool *visited) {
  queue<long long> q;
  q.push(sv);
  visited[sv]= true;
  while(!q.empty()){
      cout<<q.front()<<" ";
      for(int i=0;i<v;i++){
          if(i== q.front())continue;
          if(visited[i])continue;
          if(edges[q.front()][i]){
              q.push(i);
              visited[i] = true;
          }
      }
      q.pop();
  }
}

int main() {
  // Write your code here
  long long v, e;
  cin >> v >> e;
  bool **edges = new bool *[v];
  for (long long i = 0; i < v; i++) {
    edges[i] = new bool[v];
    for (long long j = 0; j < v; j++) {
      edges[i][j] = false;
    }
  }
  for (long long i = 0; i < e; i++) {
    long long start, end;
    cin >> start >> end;
    edges[start][end] = true;
    edges[end][start] = true;
  }
  bool *visited = new bool[v];
  for (long long i = 0; i < v; i++) {
    visited[i] = false;
  }
  for (long long i = 0; i < v; i++) {
      if(!visited[i])print(edges , v , i , visited);
  }
  delete[] visited;
  for (long long i = 0; i < v; i++)
    delete edges[i];
  delete[] edges;
  return 0;
}