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
struct data{
    int fr;
    int be;
};
void Solve(){
    int n,k;
    cin >> n >> k;
    data d[100005];
    for(int i=1;i<=n;i++){
        d[i].fr=i-1;
        d[i].be=i+1;
    }
    for(int i=0;i<k;i++){
        int a,b;
        cin >> a >> b;
        //rut quan bai thu a
        d[d[a].fr].be=d[a].be;
        d[d[a].be].fr=d[a].fr;
        //chen quan bai thu a vao truoc b
        d[d[b].fr].be=a;
        d[a].fr=d[b].fr;
        d[a].be=b;
        d[b].fr=a;
        
    }
    //tim quan bai dau tien va quan bai cuoi cung
        int Begin,End;
        for(int i=1;i<=n;i++){
            if(d[i].fr==0) Begin=i;
            if(d[i].be==n+1) End=i;
        }
    //in ra mang
        while(1){
            if(Begin==End){
                cout << End;
                break;
            }
            cout << Begin <<" ";
            Begin=d[Begin].be;
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