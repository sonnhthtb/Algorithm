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
    string a[1000];
	int n,d=0;
	cin>>n;
	while(n--){
		string x;
		cin>>x;
		bool flag1=1,flag=1;
		for(int i=0;i<x.length();i++){
			if(x[i]>='0'&&x[i]<='9'){
				if(flag1)d++;
				flag1=0;
				if(x[i]=='0'&&flag==0)a[d]+=x[i];
				if(x[i]=='0'&&flag==1&&(x[i+1]>'9'||x[i+1]==0)){
					a[d]="0";
				}
				if(x[i]!='0'){
					a[d]+=x[i];
					flag=0;
				}
			}
			else {flag1=1;flag=1;}
		}
	}
	for(int i=1;i<=d;i++){
		for(int j=i+1;j<=d;j++){
			if(a[i].length()>a[j].length())swap(a[i],a[j]);
			if(a[i].length()==a[j].length()&&a[i]>a[j])swap(a[i],a[j]);
		}
	}
	for(int i=1;i<=d;i++)cout<<a[i]<<endl;
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}