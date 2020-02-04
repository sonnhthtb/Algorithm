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
void Solve(){
    long long s;
	long k,c=0,d=0,i;
	cin>>k;
	if(k==1)cout<<1<<" "<<0;
	else {
		for(i=1;;i++)if(pow(2,i)>=k){
			s=pow(2,i);
			break;
		}
		if(k==s)cout<<s<<" "<<0;
		else if(k%2)cout<<s<<" "<<i;
		else {
			for(long j=i-1;;j--){
				if(pow(2,j)<k)k-=pow(2,j);
				if(k==pow(2,j)){
					cout<<s<<" "<<i-j;
					break;
				}
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