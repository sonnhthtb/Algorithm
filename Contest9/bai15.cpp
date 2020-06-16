#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

vector<int> ke[10005];
bool visit[10005];
int V, E;
void DFS(int u){
    stack<int> st;
    st.push(u);
    visit[u] = true;
    while(!st.empty()){
        int x = st.top();
        st.pop();
        for (int i = 0; i < ke[x].size(); i++){
            if(!visit[ke[x][i]]){
                st.push(x);
                st.push(ke[x][i]);
                visit[ke[x][i]] = true;
                break;
            }
        }
    }
}
void Duyet_TPLT()
{
    int soTPLT = 0;
    for (int u = 1; u <= V; u++)
    {
        if (!visit[u])
        {
            soTPLT++;
            DFS(u);
        }
    }
    cout << soTPLT << endl;
}
void Solve(){
    cin >> V >> E;
    for (int i = 0; i <= 10000; i++)
        ke[i].clear();
    memset(visit, false, sizeof(visit));
    for (int i = 1; i <= E; i++){
        int u, v;
        cin >> u >> v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
    Duyet_TPLT();
}
int main(){
    int T = 1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}