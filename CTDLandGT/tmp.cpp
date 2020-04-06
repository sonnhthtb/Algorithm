#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int ans[n];
		for(int i=0;i<n;i++){
			cin>>ans[i];
		}
		sort(ans,ans+n);
		int a[n]={0};
		vector < vector<int> > res;
		while(1){
			int sum=0;
			vector <int> h;
			for(int i=0;i<n;i++){
				if(a[i]){
					sum+=ans[i];
					h.push_back(ans[i]);
				}
			}
			if(sum==k){
				res.push_back(h);
			}
			int i=n-1;
			while(i>=0 && a[i]==1){
				a[i]=0;
				i--;
			}
			if(i==-1) break;
			else{
				a[i]=1;
			}
		}
		if(res.size()==0) cout<<"-1";
		else{
			sort(res.begin(),res.end());
			for(int i=0;i<res.size();i++){
				cout<<"[";
				int len=res[i].size();
				for(int j=0;j<len-1;j++){
					cout<<res[i][j]<<" ";
				}
				cout<<res[i][len-1]<<"] ";
			}
		}
		cout<<endl;
	}
	return 0;
}