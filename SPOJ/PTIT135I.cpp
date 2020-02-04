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
    string s;
    cin >> s;
    int n=s.size();
    int cnt=0;
    s+='a';
    for(int i=0;i<n;i++){
        cnt++;
        if(s[i]!=s[i+1]){
            cout <<cnt<<s[i];
            cnt=0;
        }
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