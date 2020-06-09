// Tim so BDN nho nhat chia het cho n

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int n;
void Input(){
    cin >> n;
}
int mod(string s,int k){          
    int ans = 0;
    for (int i = 0; i < s.size(); i++){
        ans = ans * 10 + (s[i] - '0');
        ans %= k;
    }
    return ans;
}
//BFS in a tree with 2 nodes are 0 and 1
void Solve(){
    queue<string> qe;
    qe.push("1");
    while (1)
    {
        string s1 = qe.front();
        qe.pop();
        if(mod(s1,n)==0){
            cout << s1 << endl;
            break;
        }  
        qe.push(s1 + "0");
        qe.push(s1 + "1");
    }
}
int main(){
    int T = 1;
    cin >> T;
    while(T--){
        Input();
        Solve();
    }
    return 0;
}