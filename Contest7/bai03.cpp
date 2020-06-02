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
    getline(cin, s);
    stack<char> st;
    for (int i = 0; i <= s.size();i++){
        if(s[i] == ' ' || i==s.size()){
            while(!st.empty()){
                cout << st.top();
                st.pop();
            }
            cout << ' ';
        }
        else
            st.push(s[i]);
    }
    cout << endl;
}

int main(){
    int T=1;
    cin >> T;
    cin.ignore();
    while(T--){
        Solve();
    }
    return 0;
}