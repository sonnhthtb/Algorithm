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
const int MAX_CHAR = 256;
using namespace std;
int d;
string s;

int check(){
    int n=s.size();
    int cnt[MAX_CHAR]={0};
    for(int i = 0; i < n; i++){
        cnt[s[i]]++;   
    }
    int dem[MAX_CHAR]={0};
    int maxx=-1;
    for(int i=0;i<n;i++){
        maxx=-1;
        for(int j=0;j<MAX_CHAR;j++){   
            if(dem[j]<=0 && cnt[j]>0 && (maxx==-1 || cnt[j]>cnt[maxx])){
                maxx=j;
            }
        }
        // cout << maxx<<endl;
        if(maxx==-1) return -1;
        cnt[maxx]--;
        dem[maxx]=d;
        for(int j=0;j<MAX_CHAR;j++){
            dem[j]--;
        }
    }
    return 1;
}
void Solve(){
    cin>> d;
    cin.ignore();
    cin >> s;
    cout << check()<<endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}