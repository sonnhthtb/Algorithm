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
        priority_queue<i64,vector <i64> ,greater<i64>> pq;
        cin >> n;
        i64 a[n+5];
        for(int i=0;i<n;i++){
            cin >> a[i];
            pq.push(a[i]);
        }
        long long sum=0;
        long long ans=0;

        while(pq.size()!=1){
            i64 x=pq.top();
            pq.pop();
            i64 y=pq.top();
            // cout << x << y <<endl;
            pq.pop();
            sum=(x%base+y%base)%base;
            ans=(ans%base+sum%base)%base;
            pq.push(sum);
        }
        cout << ans%base ;
    }
    
    int main(){
        int T=1;
        // cin >> T;
        while(T--){
            Solve();
        }
        return 0;
    }