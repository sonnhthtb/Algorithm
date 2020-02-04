#include <bits/stdc++.h>
#define i64 long long
#define fi first
#define se second
#define rz resize
#define pb push_back
#define mp make_pair
#define whatIs(a) cout << #a " is " << (a) << endl;
 
const int N = 200005;
const long long base = 1e9+7;
const long long inf = 1e18+7;

using namespace std;
void Solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(s=="0"){
        cout << -1<<endl;
        return;
    }
    while((s[n-1]-'0')%2==0 && n!=1){
        s.erase(s.begin()+n-1);
        n--;
    }
    long long sum=0;
    for(int i=0;i<s.size();i++){
        sum+=(s[i]-'0');
    }
    // cout << s<<' '<<sum<<endl;
    if(n==1 || n==0){
        cout << "-1"<<endl;
        return;
    }
    bool check=false;
    if(sum%2==0) check=true;
    else{
        if((s[0]-'0')%2==0){
            for(int i=1;i<s.size();i++){
                if((s[i]-'0')%2==1){
                    s.erase(s.begin()+i);
                    n--;
                    check=true;
                    break;
                }
            }
        }
        else{
            if(s[1]-'0'==0){
                for(int i=2;i<s.size();i++){
                    if((s[i]-'0')%2==1){
                        s.erase(s.begin()+i);
                        check=true;
                        n--;
                        break;
                    }
                }
            }
            else{
                for(int i=0;i<s.size();i++){
                    if((s[i]-'0')%2==1){
                        // cout << s[i]<<' '<<i<<endl;
                        int a=i;
                        s.erase(s.begin()+a);
                        check=true;
                        n--;
                        break;
                    }
                }
            }
        }
    }
    sum=0;
    for(int i=0;i<s.size();i++){
        sum+=(s[i]-'0');
    }
    if(sum%2==1){
        cout << "-1"<<endl;
        return;
    }
    if((s[n-1]-'0')%2==0){
        cout << "-1"<<endl;
        return;
    }
    if(n==1 || n==0){
        cout << "-1"<<endl;
        return;
    }
    if(check) cout << s;
    else cout << -1;
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