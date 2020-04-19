#include <bits/stdc++.h>
#define i64 long long
#define fi first
#define se second
#define rz resize
#define pb push_back
#define mp make_pair
#define whatIs(a) cerr << #a " is " << (a) << endl;

const int N = 200005;
const long long base = 1e9+7;
const long long inf = 1e18+7;

using namespace std;
int a[100][100];
int n,m;
int ans=-1;
void dfs(int u,int i){
    ans=max(ans,i);
    for(int v=0;v<n;v++){
        if(a[u][v] == 1){
            a[u][v]=0;
            a[v][u]=0;
            dfs(v,i+1);
            a[u][v]=1;
            a[v][u]=1;
        }
    }
}

void Solve(){
    cin >> n >> m;
    memset(a,0,sizeof(a));
    for(int i=0;i<m;i++){
        int x,y;
        cin >> x >> y;
        a[x][y]=1;
        a[y][x]=1;
    }
    ans=-1;
    for(int i=0;i<n;i++){
        dfs(i,0);
    }
    cout << ans<<endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}