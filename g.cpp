#include <iostream>
using namespace std;

class Graph{
    int v;
    int** G;
public:
   Graph(int v){
        this->v = v;
        G = new int*[v];
        for(int i =0; i<v; i++){
            G[i] = new int[v];
            for (int j=0;j<v;j++){
                G[i][j] = 0;
            }
        }
    }
    ~Graph(){
        for(int i = 0;i<v;i++){
            delete[] G[i];
        }
        delete[] G;
    }

    void AddDirectedEdge(int s, int d){
        if(s>= 0 && s<v && d>=0 && d<v){
            G[s][d] = 1;
        }
    }


    /*void AddUndirectedEdge(int s, int d){
        if(s >= 0 && s < v && d >= 0 && d < v) {
            G[s][d] = 1;
            G[d][s] = 1;
        }
    }*/
    bool verifyPath(int arr[], int pathLength){
    for(int i = 0; i < pathLength - 1; i++){
        if ( arr[i] >= v || arr[i + 1]< 0 || arr[i + 1] >= v || G[arr[i]][arr[i + 1]]== 0) {
            return false;
        }
    }
    return true;
}


    void show(){
        cout<<"Adjacency Matrix is:"<<endl;
        for(int i = 0; i<v; i++){
            for(int j = 0; j<v; j++){
                cout<<G[i][j]<< " ";
            }
            cout<<endl;
        }
    }
};

int main(){
    int vertices =7;
    Graph g(vertices);

    g.AddDirectedEdge(0,2);
    g.AddDirectedEdge(0,5);
    g.AddDirectedEdge(0,4);
    g.AddDirectedEdge(1,5);
    g.AddDirectedEdge(1,4);
    g.AddDirectedEdge(2,4);
    g.AddDirectedEdge(2,6);
    g.AddDirectedEdge(3,1);
    g.AddDirectedEdge(4,1);
    g.AddDirectedEdge(4,5);
    g.AddDirectedEdge(4,6);
    g.AddDirectedEdge(5,2);
    g.AddDirectedEdge(6,1);
    g.AddDirectedEdge(6,2);
    g.AddDirectedEdge(6,3);


    int path1[]={5,2,4,6,3,1,4,5};
    int path2[]={5,2,6,4,3,2,4,5};
    int path3[]={0,2,4,5,2,4,1};

    if(g.verifyPath(path1,8)){
        cout<<"path1 is valid path"<<endl;
    }
    else{
        cout<<"path1 is not valid path"<<endl;
    }

    if(g.verifyPath(path2,8)){
        cout<<"path2 is valid path"<<endl;
    }
    else{
        cout<<"path2 is not valid path"<<endl;
    }

    if(g.verifyPath(path3,7)){
        cout<<"path3 is valid path"<<endl;
    }
    else{
        cout<<"path3 is not valid path"<<endl;
    }




    g.show();
    return 0;

}
