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
string ll_to_string(long long x){
    string ans="";
    while(x>0){
        ans=char(x%10+'0')+ans;
        x/=10;
    }
    return ans;
}
long long n;
vector <string> tmp;
string find(string num){
    for(int i=tmp.size()-1;i>=0;i--){
        int l1=num.size();
        int l2=tmp[i].size();
        int index=0;
        for(int j=0;j<l1;j++){
            if(num[j]==tmp[i][index])
                index++;
            if(index==l2) return tmp[i];
        }
    }
    return "-1";
}
void Solve(){
    cin >> n;  
    tmp.clear();
    for(i64 i=1;i*i*i <=n ;i++){
        long long x=i*i*i;
        tmp.push_back(ll_to_string(x));
    }  
    cout << find(ll_to_string(n))<<endl;
}
int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}   