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
int n;
int a[]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
void Solve(){
    cin >> n;
    int ans=0;
    while(n>0){
        for(int i=9;i>=0;i--){
            if(n>=a[i]){
                ans+=(n/a[i]);
                n-= a[i]*(n/a[i]);
            }
        }
    }
    cout <<ans<<endl;
}

int main(){
    int T=1;
    cin >> T;
    cin.ignore();
    while(T--){
        Solve();
    }
    return 0;
}