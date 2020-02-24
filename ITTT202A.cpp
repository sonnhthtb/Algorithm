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
    cin >> n;
    if(n==1){
        cout << "1 0";
        return;
    }
    int a[n+5]={0};
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int i=0,j=n-1;
    int s=0,m=0;
    while(i<=j){
        if(i==j-1 && a[i]!=a[j]){
            s++;m++;
            break;
        }
        if(i==j && a[i+1]==0 && a[j-1]==0){
            s++;
            break;
        }
        if(a[i]>a[j]){
            a[i]-=a[j];
            a[j]=0;
            m++;
            j--;
            
        }
        else if(a[i]<a[j]){
            a[j]-=a[i];
            a[i]=0;
            i++;
            s++;
        }
        else if(a[i]==a[j]){
            a[i]=0;
            a[j]=0;
            i++;j--;
            s++;
            m++;
        }
    }
    cout << s <<" "<<m;
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}