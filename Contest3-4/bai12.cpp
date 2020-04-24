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
    string s;
    cin >> s;
    int cnt[100]={0};
    int n=s.size();
    for(int i=0;i<n;i++){
        cnt[s[i]-'a']++;
    }
    int tmp=0;
    for(int i=0;i<100;i++){
        tmp=max(tmp,cnt[i]);
    }
    if(n%2==0) {
        if(tmp>n/2) cout << "-1";
        else cout << "1";
    }
    else{
        if(tmp>n/2+1) cout << "-1";
        else cout << "1";
    }
    cout << endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}