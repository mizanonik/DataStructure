#include <iostream>

using namespace std;

int adjacencyMatrix[50][50];
int powerAdjacencyMatrix[50][50];

void addEdge(int u, int v){
    adjacencyMatrix[u][v] = 1;
    adjacencyMatrix[v][u] = 1;
}

void powerOfAdjecencyMatrix(int noOfVertices){
    for(int i = 0; i<noOfVertices; i++){
        for(int j = 0; j<noOfVertices; j++){
            for(int k = 0; k<noOfVertices; k++){
                if(adjacencyMatrix[j][k] == 1){
                    powerAdjacencyMatrix[i][k]++;
                }
            }
        }
    }
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

    for(int i = 0; i<vertices; i++){
        for(int j = 0; j<vertices; j++){
            powerAdjacencyMatrix[i][j] = 0;
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

    powerOfAdjecencyMatrix(vertices);

    int pathMatrix[vertices][vertices];
    for(int i = 0; i<vertices; i++){
        for(int j = 0; j<vertices; j++){
            if(powerAdjacencyMatrix[i][j] > 0){
                pathMatrix[i][j] = 1;
            }
            else{
                pathMatrix[i][j] = 0;
            }
        }
    }

    cout << "\Path matrix" << endl;
    for(int i = 0; i<vertices; i++){
        for(int j = 0; j<vertices; j++){
            cout << pathMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
