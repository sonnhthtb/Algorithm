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
    string s;
    cin >> s;
    int n=s.size();
    s+="aaa";
    for(int i=0;i<n;i++){
        if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4'){
            s.erase(i,3);
            n-=3;
            i--;
            // cout << s<<endl;
        }
        else if(s[i]=='1' && s[i+1]=='4'){
            s.erase(i,2);
            n-=2;
            i--;
            // cout << s<<endl;
        }
        else if(s[i]=='1'){
            s.erase(i,1);
            n--;
            i--;
            // cout << s<<endl;
        }
    }
    
    if(s=="aaa") cout << "YES"<<endl;
    else cout << "NO"<<endl;
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}