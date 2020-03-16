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
    for(int i=0;i<n;i++){
        if(s[i]>'a' && s[i]<'z'){
            s[i]=(char)(s[i]-32);
        }
    }
    // cout << s;
    vector <int> tmp;
    tmp.clear();
    for(int i=0;i<n;i++){
        switch (s[i])
        {
            case 'A':
            case 'B':
            case 'C':
                tmp.pb(2);
                break;
            case 'D':
            case 'E':
            case 'F':
                tmp.pb(3);
                break;
            case 'G':
            case 'H':
            case 'I':
                tmp.pb(4);
                break;
            case 'J':
            case 'K':
            case 'L':
                tmp.pb(5);
                break;
            case 'N':
            case 'M':
            case 'O':
                tmp.pb(6);
                break;  
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                tmp.pb(7);
                break;
            case 'T':
            case 'U':
            case 'V':
                tmp.pb(8);
                break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                tmp.pb(9);
                break;
        }
    }
    // for(auto x:tmp) cout << x ;
    // cout << endl;
    // cout <<tmp.size()<<' '<<s.size()<<endl;
    vector <int> tmp2;
    tmp2=tmp;
    reverse(tmp2.begin(),tmp2.end());
    if(tmp==tmp2){
        cout << "YES"<<endl;
    }
    else cout << "NO"<<endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}