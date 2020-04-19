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
    if(a.val>b.val) return true;
    else if(a.val==b.val) return a.time<b.time;
    else return false;
}
 
void Solve(){
    int n;
    cin >> n;
    mincy s[n+5];
    int a[n+5],b[n+5];
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        cin >>s[i].time>>s[i].val;
    }
    sort(s,s+n,cmp);
    for(int i=0;i<n;i++)
        cout << s[i].time<<" "<<s[i].val<<endl;
    int job=0,sumVal=0;
    for(int i=0;i<n;i++){
        // cout << s[i].time<<" "<<s[i].val<<endl;
        if(s[i].time>0){
            // cout << s[i].time<<" "<<s[i].val<<endl;
            job++;
            sumVal+=s[i].val;
            for(int j=i+1;j<n;j++){
                s[j].time--;
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