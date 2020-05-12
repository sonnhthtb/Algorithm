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
    int n;
    cin >> n;
    int ugly[n+5]={0};
    int uglymin = 1;
    int ugly2 = 2;
    int ugly3 = 3;
    int ugly5 = 5;
    int i2 = 1, i3 = 1, i5 = 1;
    for (int i = 1; i <= n;i++){
        ugly[i] =  uglymin;
        if(uglymin == ugly2){
            i2++;
            ugly2 =ugly[i2]*2;
        }
        if(uglymin == ugly3){
            
            i3++;
            ugly3 = ugly[i3] * 3;
        }
        if(uglymin == ugly5){
            i5++;
            ugly5 =ugly[i5]*5;
        }
        uglymin = min(ugly2, min(ugly3, ugly5));
        // cout << ugly[i] << " ";
    }
    cout << ugly[n] << endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}