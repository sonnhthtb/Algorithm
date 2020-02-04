#include <bits/stdc++.h>
#define i64 long long
#define fi first
#define se second
#define rz resize
#define pb push_back
#define mp make_pair
#define whatIs(a) cout << #a " is " << (a) << endl;
 
const int N = 200005;
const long long base = 1e9+7;
const long long inf = 1e18+7;

using namespace std;
double pi=3.141592653589793238462643383279502884;
void Solve(){
    long n;
	double s1,s2;
	//long long s2;
	cin>>n;
	s1=pi*n*n;
	s2=2*n*n;
	printf("%0.6lf\n%0.6lf",s1,s2);
}
int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}