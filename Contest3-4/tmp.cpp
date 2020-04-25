#include <bits/stdc++.h>

using namespace std;

const int N = 105;

int t;
long long n, m;
long long d[N], h[N];

int main() {
	cin >> t;
	for(int tc = 0; tc < t; ++tc){
		cin >> n >> m;
		long long maxDH = -2e12;
		for(int i = 0; i < n; ++i){
			cin >> d[i] >> h[i];
			maxDH = max(maxDH, d[i] - h[i]);
		}

		long long res = 1;	
		long long maxD = *max_element(d, d + n);
		m -= maxD;
		if(m > 0){
			if(maxDH <= 0) res = -1;
			else res += (m + maxDH - 1) / maxDH; 	
		}	
        if(res==-1) cout << "MISSION FAILED!"<<endl;
		else cout << res << endl;
	}
	
	return 0;
}