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
bool check(string s)
{
    stack<char> st;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(')
            st.push(s[i]);
        else
        {
            if (s[i] == ')' )
            {
                if(st.empty())
                    return false;
                if (st.top() != '(')
                    return false;
                else
                {
                    if (!st.empty())
                        st.pop();
                }
            }
            if (s[i] == ']')
            {
                if(st.empty()) return false;
                if (st.top() != '[')
                    return false;
                else
                {
                    if (!st.empty())
                        st.pop();
                }
            }
            if (s[i] == '}')
            {
                if(st.empty())
                    return false;
                if (st.top() != '{')
                    return false;
                else
                {
                    if (!st.empty())
                        st.pop();
                }
            }
        }
    }
    if (st.empty())
        return true;
    else
        return false;
}
void Solve()
{
    string s;
    cin >> s;
    if (check(s))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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