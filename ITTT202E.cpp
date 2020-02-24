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
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int a[30]={0};
    for(int i=0;i<s.size();i++){
        a[s[i]-'a']++;
    }
    long long sum=0;
    int cnt=0;
    for(int i=0;i<'z'-'a';){
        if(a[i]!=0){
            sum+=i+1;
            i+=2;
            cnt++;
        }
        else{
            i++;
        }
        if(cnt==k) break;
    }
    if(cnt==k)
    cout << sum<<endl;
    else cout << "-1"<<endl;
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}