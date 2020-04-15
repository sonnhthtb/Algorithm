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
vector <string> s;
char a[100][100];
int k,n,m;
bool vis[100][100];
string str;
bool have=false;
bool check(string tmp){
    for(int i=0;i<k;i++){
        if(tmp==s[i]){
            have=true;
            return true;
        }
    }
    return false;
}
void Try(int i,int j){
    vis[i][j]=true;
    str+=a[i][j];
    if(check(str)) cout << str<<" ";
    for(int u=i-1; u<=i+1 && u<m;u++){
        for(int v=j-1;v<=j+1 && v<n;v++){
            if(u>=0 && v>=0 && !vis[u][v]){
                Try(u,v);
            }
        }
    }
    str.erase(str.length()-1);
    vis[i][j]=false;
}
void Solve(){
    s.clear();
    cin >> k >>  m >> n;
    cin.ignore();
    for(int i=0;i<k;i++){
        string tmp;
        cin >> tmp;
        s.pb(tmp);
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
            vis[i][j]=false;
        }
    }
    str="";
    have=false;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            Try(i,j);
        }
    }
    if(!have) cout << "-1";
    cout << endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}