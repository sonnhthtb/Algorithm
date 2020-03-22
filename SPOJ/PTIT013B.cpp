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
struct Doi{
    string Ten;
    int Diem;
};

bool cmp(Doi a,Doi b){
    if(a.Diem<b.Diem) return false;
    if(a.Diem>b.Diem) return true;
    else return a.Ten<b.Ten;
}
void Solve(){
    int n;
    cin >> n;
    string s1,s2;
    cin >> s1;
    cin >> s2;
    Doi a[n+5];
    for(int i=0;i<n;i++){
        cin >> a[i].Ten;
        cin >> a[i].Diem;
    }
    for(int i=0;i<n;i++){
        if(a[i].Ten==s1) a[i].Diem+=3;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        if(a[i].Ten==s1) cout << i+1<<' ';
    }
    for(int i=0;i<n;i++){
        if(a[i].Ten==s1) a[i].Diem-=3;
        if(a[i].Ten==s2) a[i].Diem+=3;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        if(a[i].Ten==s1) cout << i+1<<' ';
    }
    for(int i=0;i<n;i++){
        if(a[i].Ten==s1) a[i].Diem++;
        if(a[i].Ten==s2) a[i].Diem-=2;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        if(a[i].Ten==s1) cout << i+1<<endl;
    }
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}