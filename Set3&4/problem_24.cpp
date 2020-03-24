#include <iostream>

using namespace std;

int adjacencyMatrix[50][50];

void addEdge(int u, int v){
    adjacencyMatrix[u][v] = 1;
    adjacencyMatrix[v][u] = 1;
}

int main(){

    int vertices;
    cout << "Enter number of vertices: ";
    cin >> vertices;

    for(int i = 0; i<vertices; i++){
        for(int j = 0; j<vertices; j++){
            adjacencyMatrix[i][j] = 0;
        }
    }

    int noOfEdges, u, v;
    cout << "Enter the number of edges: ";
    cin >> noOfEdges;

    for(int i = 0; i<noOfEdges; i++){
        cout << "Enter an edge: ";
        cin >> u >> v;
        addEdge(u, v);
    }

    cout << "\nAdjacency matrix" << endl;
    for(int i = 0; i<vertices; i++){
        for(int j = 0; j<vertices; j++){
            cout << adjacencyMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
