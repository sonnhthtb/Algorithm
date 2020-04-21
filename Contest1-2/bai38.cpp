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
const i64    oo = 1e18;
i64          p[20] = {0,2,3,5,7,11,13,17,19,23,29};
i64          n, res = oo;

void Try(int i, i64 ans, int cnt) {
	if (cnt > n)  return ;
	if (cnt == n) res = min(res, ans);
	for (int j=1;; j++) {
		if (ans*p[i] > res) break;
		ans *= p[i];
		if (ans < 0) break;                     //Kiem tra neu tran long long thi dung lai
		Try(i+1, ans, cnt*(j+1));              
	}
}

void Solve(){
    res=oo;
    cin >> n;
    Try(1,1,1);
    cout << res<<endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}