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
    stack <char> st;
    for(int i=0;i<s.size();i++){
        st.push(s[i]);
    }
    int cnt =0;
    string ans="";
    while(!st.empty()){
        cnt++;
        ans=st.top()+ans;
        st.pop();
        if(cnt==3 && !st.empty()){
            ans=','+ans;
            cnt=0;
        }
    }
    cout << ans;
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}