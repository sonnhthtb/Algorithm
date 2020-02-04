#include <bits/stdc++.h>
#define i64 long long
#define fi first
#define se second
#define rz resize
#define pb push_back
#define mp make_pair
#define whatIs(a) cout << #a " is " << (a) << endl;
 
const int N = 200005;
const long long base = 1e9+7;
const long long inf = 1e18+7;

using namespace std;
int a[20000000];
void Solve(){
    int n,k;
    cin >> n >> k;
    
    for(int i=0;i<n;i++){
        a[i]=i;
    }
    string s;
    cin >> s;
    int v=s.size();
    v--;
    int dem=-1;
    for(int i=0;i<=v;i++){
        if(s[i]=='A'){
            dem++;
            a[dem+n]=a[dem];
        } 
        if(s[i]=='B'){
            dem++;
            a[dem+n]=a[1+dem];
            a[1+dem]=a[dem];
        }
    }
    cout <<a[k-1+v]<<' '<<a[k+v]<<' '<<a[k+1+v];
}
int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}