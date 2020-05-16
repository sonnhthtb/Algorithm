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
long long string_to__ll(string s){
    long long ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        ans = ans * 10 + (s[i] - '0');
    }
    return ans;
}
string substring(string s,int a,int b){
    string ans = "";
    for (int i = a; i <= b;i++){
        ans += s[i];
    }
    return ans;
}
void Solve(){
    string s;
    cin >> s;
    int n = s.size();
    s = ' ' + s;
    long long dp[n + 5];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++)
    {
        dp[i] = dp[i - 1];
        for (int j = i; j >= 1; j--)
        {
            // cout << j << ' ' << i << ": ";
            // cout << substring(s, j, i) << ' ';
            dp[i] += string_to__ll(substring(s,j,i));
        }
        // cout << dp[i] << endl;
    }
    cout << dp[n] << endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}