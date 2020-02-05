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
void Solve(){
    int n;
    cin >> n;
    int a[n+5];
    long long sum=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum+=a[i];
    }
    if(sum%2==1){
        cout << "YES"<<endl;
    }
    else{
        int odd=0,even=0;
        for(int i=0;i<n;i++){
            if(a[i]%2==0) even ++;
            else odd++;
        }
        if(odd == 0 || even ==0) cout <<"NO"<<endl;
        else cout <<"YES"<<endl;
    }
}
int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}