// tim duong thi bang dfs su dung stack

#include<bits/stdc++.h>

using namespace std;
int ok[10000];
vector<int> sunn[1005];
int u, v, s;

void DFS_stack(int s){
    stack<int> mincy;
    ok[s] = 1;
    mincy.push(s);
    cout << s << " ";
    while(!mincy.empty()){
        int x = mincy.top();
        mincy.pop();
        for (int i = 1; i <= u;i++){
            if(ok[sunn[x][i]]==0){
                ok[sunn[x][i]] = 1;
                cout << sunn[x][i] << " ";
                mincy.push(x);
                mincy.push(sunn[x][i]);
            }
        }
    }
}

int main(){
    cin >> u >> v >> s;
    for (int i = 1; i <= u;i++){
        sunn[i].clear();
    }
    for (int i = 1; i <= v;i++){
        int x, y;
        cin >> x >> y;
        sunn[x].push_back(y);
        sunn[y].push_back(x);
    }
    DFS_stack(s);
}
