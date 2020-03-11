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
    i64 N;
    cin>>N;
    string chair;
    cin>>chair;
    i64 dem = 1;
    for (int i=0; i<N; i++)
    {
        if (chair[i]=='S') dem++;
        else
        {
            dem++;
            i++;
        }
    }
    if (N>dem) cout<<dem;
    else cout<<N;
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}