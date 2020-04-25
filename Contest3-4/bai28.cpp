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
    cin >> n;
    int a[n+5];
    stack<int> b1;
    stack <int > b2;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int mid=n/2;
    if(n%2==1) mid++;
    for(int i=0;i<n;i++){
        if(i>=mid){
            b2.push(a[i]);
        }
        else b1.push(a[i]);
    }
    int ans=0;
    while(!b1.empty() && !b2.empty()){
        // cout << b1.top()<<' '<<b2.top()<<endl;
        if(b1.top()>b2.top()/2){
            ans++;
            b1.pop();
        }
        else{
            ans++;
            b1.pop();
            b2.pop();
        }
        // cout << ans<<endl;
    }
    ans+=(b1.size()+b2.size());
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