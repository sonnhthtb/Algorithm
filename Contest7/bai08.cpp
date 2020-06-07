#include <bits/stdc++.h>
#define i64 long long
#define fi first
#define se second
#define rz resize
#define pb push_back
#define mp make_pair
#define whatIs(a) cerr << #a " is " << (a) << endl;

const int N = 200005;
const long long base = 1e9 + 7;
const long long inf = 1e18 + 7;

using namespace std;

void Solve()
{
    string s;
    cin >> s;
    int n = s.size();
    string ans ="";
    stack<int> st;
    st.push(0);
    for (int i = 0; i < n; i++){
        if(s[i] == '+'){
            if(st.top() == 1){
                ans += '-';
            }
            else{
                ans += '+';
            }
        }
        else if(s[i] == '-'){
            if (st.top() == 1) {
                ans += '+';
            }
            else{
                ans += '-';
            }
        }
        else if(s[i] == '('){
            if(s[i-1]=='-'){
                if(st.top() == 1){
                    st.push(0);
                }
                else{
                    st.push(1);         
                }
            }
            else{
                st.push(st.top());
            }
        }
        else if(s[i]==')' && !st.empty()){
            st.pop();
        }
        else{
            ans += s[i];
        }
    }
    cout << ans << endl;
}

int main()
{
    int T = 1;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        Solve();
    }
    return 0;
}