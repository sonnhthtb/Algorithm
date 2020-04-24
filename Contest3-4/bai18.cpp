//Tim so may man be nhat co tong bang n
/*
    n=4*x+7*y;
    tim x va y roi in ra tat ca so 4 truoc so 7 sau la dc
*/

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
    int x=n/7;
    int y=n/4;
    long long sum=0;
    for(int i=x;i>=0;i--){
        for(int j=0;j<=y;j++){
            sum=7*i+4*j;
            if(sum<n){
                continue;
            }
            else{
                if(sum>n) break;
                else{
                    for(int k=0;k<j;k++) cout << "4";
                    for(int k=0;k<i;k++) cout << "7";
                    cout << endl;
                    return;
                }
            }
        }
    }
    cout << "-1"<<endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}