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

struct Data{
    i64 gtri;
    int slxh=0;
    int vtbd=0;
};

bool cmp(Data x,Data y){
    if(x.slxh==y.slxh){
        return x.vtbd<y.vtbd;
    }
    return x.slxh>y.slxh;
}

void Solve(){
    i64 n,c;
    cin >> n >> c;
    Data x;
    vector <Data> ptu;
    for(int i=0;i<n;i++){
        cin >> x.gtri;
        bool check=true;
        for(auto &z:ptu){
            if(x.gtri == z.gtri){
                z.slxh++;
                check=false;
            }
        }
        // for(int j=0;j<ptu.size();j++){
        //     cout << ptu[j].gtri<<' '<<ptu[j].slxh<<endl;
        // }
        if(check){
            x.vtbd=i;
            x.slxh=1;
            ptu.pb(x);
        }
        
    }
    sort(ptu.begin(),ptu.end(),cmp);
    for(auto z:ptu){
        for(int i=0;i<z.slxh;i++){
            cout << z.gtri<<" ";
        }
        // cout << z.gtri<<' '<<z.slxh<<endl;
    }
    cout << endl; 
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}