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
    int n;
    cin >>n;
    int a[n+5];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    long long num1=0,num2=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            num1*=10;
            num1+=a[i];
        }
        else{
            num2*=10;
            num2+=a[i];
        }
    }
    cout << num1+num2<<endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}