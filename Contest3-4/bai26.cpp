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
    int k;
    i64 a,b;
    cin >> k >> a >> b;
    vector <int> rs;
    int nho=0;
    while (a >0 || b > 0)
    {
        int temp = (a%10 + b%10 + nho);
        nho = temp / k;
        rs.push_back(temp%k);
        a/=10;
        b/=10;
    }
    if (nho!=0)
        rs.push_back(nho);
    for (int i=rs.size()-1;i>=0;i--)
        cout << rs[i];
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