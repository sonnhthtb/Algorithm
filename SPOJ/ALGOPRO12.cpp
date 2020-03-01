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
    long long n, m;
    int dem = 1;
    cin >> n;
    for (long long i = 2; i * i <= n; i++)
    	if (n % i == 0) {
        int k = 0;
        while (n % i == 0) {
			n = n / i;
			k++;
		}
        dem *= 2 * k + 1;
    }
    if (n > 1) dem *= 3;
    cout << dem;
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}