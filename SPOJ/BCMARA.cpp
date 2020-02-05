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

struct Time{
    int s;
    int m;
    int h;
};

bool cmp(Time A,Time B){
    if(A.h <B.h) return true;
    else if(A.h == B.h ) {
        if(A.m < B.m) return true;
        else if(A.m == B.m ){
            if(A.s <= B.s) return true;
            else return false;
        }
        else return false;
    }
    else return false;
}

void Solve(){
    int n;
    cin >> n;
    Time a[n+5];
    for(int i=0;i<n;i++){
        cin >> a[i].h;
        cin >> a[i].m;
        cin >> a[i].s;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        cout << a[i].h <<" "<<a[i].m<<" "<<a[i].s<<endl;
    }
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}