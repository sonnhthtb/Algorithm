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
    stack <int> st;
    for(int i=0;i<n;i++){
        // cout << s[i]<<' ';
        if(s[i]=='C') st.push(12);
        if(s[i]=='H') st.push(1);
        if(s[i]=='O') st.push(16);
        if(s[i]>='2' && s[i]<='9'){
            int x=st.top();
            x*=(s[i]-'0');
            st.pop();
            st.push(x);
        }
        if(s[i]=='(') st.push(0);
        if(s[i]==')'){
            int tmp=0;
            while(st.top()!=0){
                // cout << st.top()<<' ';
                tmp+=st.top();
                st.pop();
            }
            st.pop();
            st.push(tmp);
        }
    }
    int ans=0;
    while(!st.empty()){
        ans+=st.top();
        st.pop();      
    }
    cout << ans<<endl;
}
int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}