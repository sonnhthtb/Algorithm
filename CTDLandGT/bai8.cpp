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
int n,a[1000];
bool check[1000];
void Init(){
    for(int i=1;i<=n;i++){
        a[i]=i;
        check[i]=true;
    }
}
void Display(){
    for(int i = 1;i <= n; i++){
        cout << a[i];
    }
    cout << ' ';
}

void Try(int i){
    for(int j = n;j >= 1; j--){
        if(check[j]){
            a[i]=j;
            check[j]=false;
            if(i == n) Display();
            else Try(i+1);
            check[j]=true;
        }
    }
}
void Solve(){
    cin >> n;
    Init();
    Try(1);
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