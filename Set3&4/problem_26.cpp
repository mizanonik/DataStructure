#include <iostream>
#include <vector>

using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v)
    {
        cout << "\n Adjacency list of vertex "
             << v << "\n head";

        for (int i = 0; i < adj[v].size(); i++) {
            cout << " -> " << adj[v].at(i);
        }

        cout << endl;;
    }
}

int main()
{
    int vertices, edges, u, v;
    cout << "Enter the number of vertices: ";
    cin >> vertices;

    cout << "Enter the number of edges: ";
    cin >> edges;

    vector<int> adj[vertices];

    for(int i = 0; i<edges; i++){
        cout << "Enter an edge: ";
        cin >> u >> v;
        addEdge(adj, u, v);
    }

    printGraph(adj, vertices);
    return 0;
}
