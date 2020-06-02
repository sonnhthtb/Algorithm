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
    switch(x){
        case '+' :
        case '-' :
        case '*' :
        case '/' :
            return true;
            break;
    }
    return false;
}

void Solve(){
    string s;
    getline(cin, s);
    // cin.ignore();
    int n = s.size();
    stack<char> st;
    for (int i = 0; i < n; i++){
        if(s[i]=='(' || isOperator(s[i])){
            st.push(s[i]);
        }
        if(s[i] == ')'){
            if(st.top() == '('){
                cout << "Yes" << endl;
                return;
            }
            else{
                while(st.top()!='(' && !st.empty()){
                    st.pop();
                }
                if(!st.empty())
                    st.pop();
            }
        }
    }
    cout << "No" << endl;
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