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
int n,k;
int a[1000];
int sum=0;
vector <int> vt;
vector<bool> vis(1000,false);
int cnt=0;
void Try(int i,int S){
    if(S>sum) {
        return;
    }
    if(cnt==k) return;
    if(S==sum && vt.size()!=0){
        cnt++;
        for(int j=0;j<vt.size();j++){
            vis[vt[j]]=true;
        }
        return;
    }
    for(int j = i+1; j <= n; j++ ){
        if(!vis[j]){
            vt.push_back(j);
            Try(j,S+a[j]);
            vt.pop_back();
        }
    } 
}
void Solve(){
    cin >> n >> k;
    sum=0;
    cnt=0;
    vt.clear();
    for(int i=1;i<=n;i++){
        cin >> a[i];
        sum+=a[i];
        vis[i]=false;
    }
    // cout << sum<<endl;
    if(k == 1){
        cout << "1"<<endl;
        return;
    }
    if(n<k){
        cout << "0"<<endl;
        return;
    }
    if(sum%k!=0){
        cout << "0"<<endl;
        return;
    }
    sum/=k;
    Try(0,0);
    // cout << cnt<<endl;
    if(cnt==k) cout << "1"<<endl;
    else cout << "0"<<endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}