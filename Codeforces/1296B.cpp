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
    i64 s;
    cin >> s;
    i64 ans=s;
    while(s>=10){
        if(s>100000){
            s-=100000;
            s+=10000;
            ans+=10000;
        }
        else if(s>10000){
            s-=10000;
            s+=1000;
            ans+=1000;
        }
        else if(s>1000){
            s-=1000;
            s+=100;
            ans+=100;
        }
        else{
            s-=10;
            s+=1;
            ans++;
        }
    }
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