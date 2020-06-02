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
bool isOperator(char x){
    switch (x)
    {
        case '+':
        case '-':
        case '*':
        case '/':
            return true;
            break;
    }
    return false;
}
void Solve(){
    string s;
    cin >> s;
    string ans = "";
    stack<char> st;
    int n = s.size();
    for (int i = 0; i < n; i++){
        if(s[i]==')'){
            string tmp = "";
            while(st.top()!='(' && !st.empty()){
                tmp += st.top();
                st.pop();
            }
            if(!st.empty())
            st.pop();
            reverse(tmp.begin(),tmp.end());
            ans += tmp;
        }
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