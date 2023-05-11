#include<iostream>
#include<vector>
#include<queue>
using namespace std;
struct node{
   int val;
   int state; //status 
};
//BFS algorithm on the given graph
void bfs(node *arr, node s, vector<vector<int>>& graph, int vertices){
   node u;
   int i, j;
   queue<node> que;
   for(i = 0; i<vertices; i++){
      arr[i].state = 0; //not visited
   }
   arr[s.val].state = 1;//visited
   que.push(s); //insert starting node
   while(!que.empty()){
      u = que.front(); //delete from queue and print
      que.pop();
      cout << char(u.val+'A') << " ";
      for(i = 0; i<vertices; i++){
         if(graph[i][u.val]){
            //when the node is non-visited
            if(arr[i].state == 0){
               arr[i].state = 1;
               que.push(arr[i]);
            }
         }
      }
      u.state = 2;//completed for node u
   }
}

/*Takes the adjacency matrix of the graph and the number of vertices 
as input and stores it in the 2D vector graph.*/
void inputMatrix(vector<vector<int>>& graph, int vertices){
    cout<<"Enter the Adjacency matrix"<<endl;
    for(int i=0;i<vertices;i++){
        for(int j=0;j<vertices;j++){
            cin>>graph[i][j];
        }
    }
}

//Driver Code
int main(){
    int vertices;
    cout<<"Enter the no of Vertices : "<<endl;
    cin>>vertices;
    vector<vector<int>> graph(vertices, vector<int>(vertices));
    node arr[vertices];
    inputMatrix(graph,vertices);
    char s;
    for(int i = 0; i<vertices; i++){
        arr[i].val = i;
    }
    cout<<"Enter the starting Vertice : "<<endl;
    cin>>s;//Taking starting vertex as input
    node start;
    start.val = s-'A';
    cout << "BFS Traversal: ";
    bfs(arr, start, graph, vertices);
    cout << endl;
}
