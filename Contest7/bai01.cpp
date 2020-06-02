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
    int top = 0;
    int a[100005] = {0};
    while(getline(cin,s)){
        if(s.size()>=6){
            int tmp = 0;
            for (int i = 5; i < s.size();i++){
                tmp = tmp * 10 + (s[i] - '0');
            }
            a[top++] = tmp;
        }
        if(s.size()==3){
            if(top != 0)
                top--;
        }
        if(s.size() == 4){
            if(top == 0){
                cout << "empty" << endl;
            }
            else{
                for (int i = 0; i < top; i++){
                    cout << a[i] << " ";
                }
                cout << endl;
            }
        }
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