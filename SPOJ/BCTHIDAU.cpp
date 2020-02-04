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
struct Doi{
    string Name;
    long long sub[5];
    long long time[5];
    long long sumSub=0;
    long long sumTime=0;
};
bool cmp(Doi dt1,Doi dt2){
    if(dt1.sumSub!=dt2.sumSub) return dt1.sumSub<dt2.sumSub;
    else{
        return dt1.sumTime>dt2.sumTime;
    }
}
void Solve(){
    int n;
    cin >> n;
    Doi dt[n+5];
    for(int i=0;i<n;i++){
        cin >> dt[i].Name;
        for(int j=1;j<=4;j++){
            cin >> dt[i].sub[j]>>dt[i].time[j];
            if(dt[i].time[j]!=0){
                dt[i].sumTime+=((dt[i].sub[j]-1)*20+dt[i].time[j]);
                dt[i].sumSub++;
            }
        }
        // cout << dt[i].Name<<' '<<dt[i].sumSub<<' '<<dt[i].sumTime<<endl;
    }
    sort(dt,dt+n,cmp);
    cout << dt[n-1].Name<<' '<<dt[n-1].sumSub<<' '<<dt[n-1].sumTime;
}
int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}