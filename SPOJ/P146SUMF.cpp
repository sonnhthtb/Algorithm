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
int cnt[20]={0};
bool check(){
    for(int i=0;i<10;i++){
        if(cnt[i]==0) return false;
    }
    return true;
}

void Solve(){
    i64 n;
    while(cin >> n){
        i64 tmp=n;
        for(int i=0;i<10;i++) cnt[i]=0;
        int k=0;
        while(!check()){
            k++;
            tmp=n*k;
            while(tmp!=0){
                cnt[tmp%10]++;
                tmp/=10;
            }
        }
        cout << k<<endl;
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