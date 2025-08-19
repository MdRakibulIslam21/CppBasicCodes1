#include <iostream>
using namespace std;

class Graph {
    int v;
    int** G;

public:

    Graph(int v) {
        this->v = v;
        G = new int*[v];
        for (int i = 0; i < v; i++) {
            G[i] = new int[v];
            for (int j = 0; j < v; j++) {
                G[i][j] = 0;
            }
        }
    }

    ~Graph() {
        for (int i = 0; i < v; i++) {
            delete[] G[i];
        }
        delete[] G;

        void addUndirectedEdge(int s, int d) {
        if (s >= 0 && s < v && d >= 0 && d < v) {
            G[s][d] = 1;
            G[d][s] = 1;
        }

        void addWeightedDirectedEdge(int s, int d, int w) {
        if (s >= 0 && s < v && d >= 0 && d < v) {
            G[s][d] = w;
        }
    }

    void addWeightedUndirectedEdge(int s, int d, int w) {
        if (s >= 0 && s < v && d >= 0 && d < v) {
            G[s][d] = w;
            G[d][s] = w;
        }
    }

    void show() {
        cout << "Adjacency Matrix:" << endl;
        for (int i = 0; i < v; i++) {
            for (int j = 0; j < v; j++) {
                cout << G[i][j] << " ";
            }
            cout << endl;
        }
    }


    };

int main() {
    int vertices = 5;

    // Create a graph with the specified number of vertices
    Graph g(vertices);

    // Add edges
    g.addDirectedEdge(0, 1);
    g.addDirectedEdge(1, 2);
    g.addUndirectedEdge(3, 4);
    g.addWeightedDirectedEdge(2, 3, 5);
    g.addWeightedUndirectedEdge(0, 4, 10);

    // Show the adjacency matrix
    g.show();

    return 0;
}


