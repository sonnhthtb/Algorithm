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
int n,x,a[1000];
int X[1000];
int sum=0;
bool check=false;
void Display(int i){
    cout << '[';
    for(int j=1;j<i;j++){
        cout << a[X[j]]<<" ";
    }
    cout << a[X[i]]<<"] ";
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(sum > x) return;
        if(a[j]>=a[X[i-1]]){
            if(sum > x) return;
            X[i]=j;
            // Display(i);
            sum+=a[j];
            // cout << sum <<" "<< a[X[i]];
            if(sum==x){
                check=true;
                Display(i);
            }
            else Try(i+1);
            sum-=a[X[i]];
        }
    }
}

void Solve(){
    cin >> n >> x;
    sum=0;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }    
    Try(1);
    if(check==false) cout << "-1";
    cout << endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}