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
    string a,b;
    cin >> a >> b;
    long long s1=0,s2=0;
    long long tmp=1;
    for(int i=a.size()-1;i>=0;i--){
        s1+=tmp*(a[i]-'0');
        tmp*=2;
    }
    tmp=1;
    for(int i=b.size()-1;i>=0;i--){
        s2+=tmp*(b[i]-'0');
        tmp*=2;
    }
    cout << s1*s2<<endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}