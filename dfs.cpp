#include<iostream>
#include<vector>
#include<stack>
using namespace std;

struct node{
   int val;
   int state; //status 
};

void dfs(node *arr, node s, vector<vector<int>>& graph, int vertices){
    node u;
    int i, j;
    stack<node> stk;
    for(i = 0; i<vertices; i++){
        arr[i].state = 0; //not visited
    }
    arr[s.val].state = 1;//visited
    stk.push(s); //insert starting node
    while(!stk.empty()){
        u = stk.top(); //get top node from stack
        stk.pop();
        cout << char(u.val+'A') << " ";
        for(i = 0; i < vertices; i++){ // loop through all the nodes
            if(graph[u.val][i]){ // check if there is an edge from current node to adjacent node
                if(arr[i].state == 0){ //when the node is non-visited
                    arr[i].state = 1;
                    stk.push(arr[i]); // push the node corresponding to the adjacent node, not arr[i]
                }
            }
        }
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
    cout << "DFS Traversal: ";
    dfs(arr, start, graph, vertices);
    cout << endl;
}

