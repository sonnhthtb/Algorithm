#include <iostream>
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
long long x1,y1,x2,y2,x3,y3,x4,y4;
bool trong1(long long a,long long b){
	if(a>=x1&&a<=x2&&b<=y2&&b>=y1) return 1;
	return 0;
}
bool trong2(long long a,long long b){
	if(a>=x3&&a<=x4&&b<=y4&&b>=y3) return 1;
	return 0;
}
bool test(long long xa,long long ya,long long ua,long long va,long long xb,long long yb,long long ub,long long vb){
	if(xa<=xb&&ua>=xb&&ya>=yb&&ya<=vb) return 1;
	return 0;
}
void Solve(){
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
		if(trong1(x3,y3)||trong1(x3,y4)||trong1(x4,y3)||trong1(x4,y4)) cout<<"1";
		else if(trong2(x1,y1)||trong2(x1,y2)||trong2(x2,y1)||trong2(x2,y2)) cout<<"1";
		else if(test(x1,y1,x2,y1,x3,y3,x3,y4)||test(x1,y2,x2,y2,x3,y3,x3,y4)||test(x1,y1,x2,y1,x4,y3,x4,y4)||test(x1,y2,x2,y2,x4,y3,x4,y4)) cout<<"1";
		else if(test(x3,y3,x4,y3,x1,y1,x1,y2)||test(x3,y4,x4,y4,x1,y1,x1,y2)||test(x3,y3,x4,y3,x2,y1,x2,y2)||test(x3,y4,x4,y4,x2,y1,x2,y2)) cout<<"1";
		else cout<<"0";
		cout<<endl;
}
int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}