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
	string T;
	cin >> n >> T;
	int tl = T.size();
	while (n-- > 0) {
		int k;
		cin >> k;
		bool correct = false;
		for (int i=tl/2; i>=k; i--) {
			for (int j=0; j<=tl-2*i; j++) {
				int error = 0;
				for (int m=0; m<i; m++) {
					if (T[j+m] != T[j+i+m]) error++;
				}
				if (error <= k) {
					cout << i << endl;
					correct = true;
					break;
				}
			}
			if (correct) break;
		}
		if (!correct) cout << 0 << endl;
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