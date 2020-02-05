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

struct Person{
    string name;
    int day;
    int month;
    int year;
};

bool cmp(Person B,Person A){
    if(A.year <B.year) return true;
    else if(A.year == B.year ) {
        if(A.month < B.month) return true;
        else if(A.month == B.month ){
            if(A.month <= B.month) return true;
            else return false;
        }
        else return false;
    }
    else return false;
}

void Solve(){
    int n;
    cin >> n;
    Person a[n+5];
    for(int i=0;i<n;i++){
        cin >> a[i].name;
        cin >> a[i].day;
        cin >> a[i].month;
        cin>> a[i].year;
    }
    sort(a,a+n,cmp);
    cout << a[0].name<<endl;
    
    cout << a[n-1].name<<endl;
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}