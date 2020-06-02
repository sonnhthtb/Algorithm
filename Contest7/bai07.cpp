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
//loai bo cac cap ngoac () dung ta luon duoc day dang )))(((((
void Solve()
{
    string s;
    cin >> s;
    int n = s.size();
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ')' && !st.empty())
        {
            if (st.top() == '(')
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        else
        {
            st.push(s[i]);
        }
    }
    int m = st.size();
    int k = 0;
    while (st.top() == '(')
    {
        st.pop();
        k++;
        if (st.empty())
            break;
    }
    cout << m / 2 + k % 2 << endl;
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