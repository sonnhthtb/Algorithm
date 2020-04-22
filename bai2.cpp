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

void isPalindrome(string s,int i){
    if(i==-1) {
        cout << "String is Palindrome"<<endl;
        return;
    }
    if(s[i]!=s[s.length()-i-1]){
        cout << "String is not Palindrome"<<endl;
        return;
    } 
    isPalindrome(s,i-1);
}

void Solve(){
    string s;
    cin >> s;
    isPalindrome(s,s.length()/2);
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}