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
    while(1){  
        string s;
        getline(cin,s);
        if(s==".") break;
        int n=s.size();
        stack <char> st;
        bool check =true;
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='[') st.push(s[i]);
            if(s[i]==')'){
                if(st.empty()) check=false;
                else{
                    while(st.top()!='('){
                        if(st.top()=='['){
                            check=false;
                            break;
                        }
                        st.pop();
                        if(st.empty()) break;
                    }
                    if(st.empty()) check=false;
                    else
                        st.pop();
                }
            }
            if(s[i]==']'){
                if(st.empty()) check=false;
                else{
                    while(st.top()!='['){
                        if(st.top()=='('){
                            check=false;
                            break;
                        }
                        st.pop();
                        if(st.empty()) break;
                    }
                    if(st.empty()) check=false;
                    else
                        st.pop();
                }
            }
        }
        if(st.empty() && check) cout << "yes"<<endl;
        else cout << "no"<<endl;
    }
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}