#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
string s1, s2;
void Input(){
    cin >> s1 >> s2;
}
string Convert(string s){
    int n = s.size();
    string ans = "";
    stack<char> st;
    st.push('+');
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '+')
        {
            if (st.top() == '-')
            {
                ans += '-';
            }
            else
                ans += '+';
        }
        else if (s[i] == '-')
        {
            if (st.top() == '-')
            {
                ans += '+';
            }
            else
            {
                ans += '-';
            }
        }
        else if (s[i] == '(')
        {
            if (s[i - 1] == '-')
            {
                if (st.top() == '-')
                {
                    st.push('+');
                }
                else
                {
                    st.push('-');
                }
            }
            else
            {
                st.push(st.top());
            }
        }
        else if (s[i] == ')' && !st.empty())
        {
            st.pop();
        }
        else
        {
            ans += s[i];
        }
    }
    return ans;
}
void Solve(){
   
    cout << ((Convert(s1) == Convert(s2)) ? "YES" : "NO");
    cout << endl;
}
int main(){
    int T = 1;
    cin >> T;
    cin.ignore();
    while(T--){
        Input();
        Solve();
    }
    return 0;
}