#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
string s;
int Operator(char c){
    if(c == '^')
        return 3;
    else if(c == '*' || c == '/' || c == '%')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else
        return -1;
}

void Input(){
    cin >> s;

}

void Solve(){
    int n = s.size();
    stack<char> st;
    st.push('0');
    string ans = "";
    for (int i = 0; i < n; i++){
        if((s[i]>='a' && s[i]<='z') || (s[i] >= 'A' && s[i] <= 'Z')){
            ans += s[i];
        }
        else if( s[i] == '(')
            st.push('(');
        else if( s[i] == ')'){
            while(st.top() != '0' && st.top() != '('){
                char c = st.top();
                st.pop();
                ans += c;
            }
            if(st.top() == '('){
                st.pop();
            }
        }
        else{
            while(st.top() != '0' && Operator(s[i]) <= Operator(st.top())){
                char c = st.top();
                st.pop();
                ans += c;
            }
            st.push(s[i]);
        }
    }
    while(st.top() != '0'){
        char c = st.top();
        st.pop();
        ans += c;
    }
    cout << ans << endl;
}
int main(){
    int T = 1;
    cin >> T;
    while(T--){
        Input();
        Solve();
    }
    return 0;
}