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
bool check(int a[],int n){
    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1]) return false;
    }
    return true;
}
void Solve(){
    int n;
    int Case=0;
    while(1){
        Case++;
        cin >> n;
        if(n==0) break;
        int a[n+5];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int ans=0;
        int b[n+5];
        cout << "Case "<<Case<<": ";
        while(1){
            if(ans==1000 && !check(a,n)){
                cout << "not attained"<<endl;
                break;
            }
            if(check(a,n)){
                cout << ans <<" iterations"<<endl;
                break;
            }
            for(int i=0;i<n;i++){
                b[i]=abs(a[i]-a[(i+1)%(n)]);
            }
            for(int i=0;i<n;i++){
                a[i]=b[i];
            }
            ans++;
        }
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