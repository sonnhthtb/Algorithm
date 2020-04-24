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
int k;
string s;
void Solve(){
    priority_queue<int> pq;
    cin >> k;
    cin.ignore();
    cin >> s;
    int n=s.size();
    int cnt[256]={0};
    for(int i = 0; i < n; i++){
        cnt[s[i]]++;   
    }
    for(int i = 0; i < 256; i++){
        if(cnt[i]!=0)
            pq.push(cnt[i]);
    }
    while(k--){
        int x=pq.top();
        pq.pop();
        x--;
        pq.push(x);
    }
    int sum=0;
    while(!pq.empty()){
        
        // cout << pq.top()<<endl;
        sum+=(pq.top()*pq.top());
        pq.pop();
    }
    cout << sum<<endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}