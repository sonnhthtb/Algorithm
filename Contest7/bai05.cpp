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
    stack<int> st;
    st.push(-1);
    int rs = 0;
    int n = s.size();
    for (int i = 0; i < n; i++){
        if(s[i]=='(')
            st.push(i);
        else{
            st.pop();
            if(!st.empty())
                rs = max(rs, i - st.top());
            else
                st.push(i);
        }
    }
    cout << rs << endl;
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