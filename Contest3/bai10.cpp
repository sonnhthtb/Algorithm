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

void Solve(){
    int n;
    priority_queue<int,vector <int> ,greater<int>> pq;
    queue<int> q;
    cin >> n;
    int a[n+5];
    for(int i=0;i<n;i++){
        cin >> a[i];
        pq.push(a[i]);
    }
    long long sum=0;
    long long ans=0;

    while(pq.size()!=1){
        int x=pq.top();
        pq.pop();
        int y=pq.top();
        // cout << x << y <<endl;
        pq.pop();
        sum=x+y;
        ans+=sum;
        pq.push(x+y);
    }
    cout << ans <<endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}