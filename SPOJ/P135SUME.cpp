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
    int a[10];
    for(int i=0;i<8;i++){
        cin >> a[i];
    }
    bool check1=true;
    bool check2=true;
    for(int i=0;i<8;i++){
        if(a[i]!=i+1)
            check1=false;
        if(a[i]!=8-i)
            check2=false;
    }    
    if(check1) cout << "ascending";
    if (check2) cout << "descending";
    if(!check1 && !check2) cout <<"mixed";
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}