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
 
struct mincy{
    int time;
    int val;
};
 
bool cmp(mincy a,mincy b){
    return a.val>b.val;
}
void Solve(){
    int n;
    cin >> n;
    mincy s[n+5];
    int a[n+5],b[n+5];
    bool check[n+5];
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        cin >>s[i].time>>s[i].val;
    }
    memset(check,true,sizeof(check));
    sort(s,s+n,cmp);
    int job=0,sumVal=0;
    for(int i=0;i<n;i++){
        for(int j=min(n,s[i].time)-1;j>=0;j--){
            if(check[j]){
                job++;
                sumVal+=s[i].val;
                check[j]=false;
                break;
            }
        }
    }
    cout << job<<" "<<sumVal<<endl;
}
 
int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
} 