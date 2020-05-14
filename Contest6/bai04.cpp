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
    int n,m;
    cin >> n >> m;
    int a[n + 5];
    int b[m + 5];
    vector <int> s;
    int cnt[100005];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++){
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + m);
    for (int i = 0; i < n; i++)
    {
        s.pb(a[i]);
        cnt[a[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        s.pb(b[i]);
        cnt[b[i]]++;
    }
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size() - 1; i++)
    {
        if(s[i]!=s[i+1])
            cout << s[i] << ' ';
    }
    if(s[s.size()-1]!=s[s.size()-2])
        cout << s[s.size() - 1];
    cout << endl;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
            cout << s[i] << ' ';
    }
    cout << endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}