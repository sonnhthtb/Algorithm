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

int a[100];
int x[100];
int tt[100];
int kt[100];
bool check1=false;
vector <bool> unVis(10,true);
vector <bool> unVis2(10,true);
void Init(){
    for(int i=0;i<10;i++){
        unVis[i]=true;
        unVis2[i]=true;
    }
    check1=false;
}
bool check(){
    int sum=x[1];
    for(int i=2;i<=5;i++){
        if(tt[i-1]==1){
            sum+=x[i];
        }
        if(tt[i-1]==2){
            sum-=x[i];
        }
        if(tt[i-1]==3){
            sum*=x[i];
        }
    }
    if(sum==23) return true;
    else return false;
}
void Try2(int i){
    for(int j=1;j<=3;j++){
            tt[i]=j;
            if(i==4){
                if(check()) check1=true;
            }
            else Try2(i+1);
    }
}
void Try(int i){
    for(int j=1;j<=5;j++){
        if(unVis2[j]){
            x[i]=a[j];
            unVis2[j]=false;
            if(i==5) {
                Try2(1);
            }
            else Try(i+1);
            unVis2[j]=true;
        }
    }
}
void Solve(){
    for(int i=1;i<=5;i++){
        cin >> a[i];
    }
    sort(a+1,a+6);
    Init();
    Try(1);
    if(check1) cout << "YES"<<endl;
    else cout << "NO"<<endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}