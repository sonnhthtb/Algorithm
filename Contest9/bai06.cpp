// DFS

#include<bits./stdc++.h>

using namespace std;
int u, v, n, m, s;
int mark[1005] = {0};
int a[1005][1005];

void DFS(int u){
    cout << u << " ";
    mark[u] = 1;
    for (int v = 1; v <= n; v++){
        if(a[u][v] == 1 && mark[v]==0){
            DFS(v);
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        memset(mark, 0, sizeof(mark));
        cin >> n >> m >> s;
        for (int i = 1; i <= n;i++){
            for (int j = 1; j <= n;j++){
                a[i][j] = 0;
            }
        }
        for (int i = 1; i <= m;i++){
            cin >> u >> v;
            a[u][v] = 1;
            a[v][u] = 1;
        }
        DFS(s);
        cout << endl;
    }
}