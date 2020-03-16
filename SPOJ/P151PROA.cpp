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
int cnt[10];
void Solve(){
    for(int i=0;i<10;i++) cnt[i]=0;
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0;i<n;i++){
        switch (s[i])
        {
        case '2':
            cnt[2]++;
            break;
        case '3':
            cnt[3]++;
            break;
        case '4':
            cnt[3]++;
            cnt[2]+=2;
            break;
        case '5':
            cnt[5]++;
            break;
        case '6':
            cnt[5]++;
            cnt[3]++;
            break;   
        case '7':
            cnt[7]++;
            break; 
        case '8':
            cnt[7]++;
            cnt[2]+=3;
            break;
        case '9':
            cnt[7]++;
            cnt[3]+=2;
            cnt[2]++;
            break;
        }
    }
    for(int i=9;i>=2;i--){
        while(cnt[i]){
            cout << i;
            cnt[i]--;
        }
    }
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