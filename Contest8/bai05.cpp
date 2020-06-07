#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int n;
void Input(){
    cin >> n;
}

//BFS in a tree with 2 nodes are 0 and 1
void Solve(){
    queue<string> qe;
    qe.push("1");
    while(n--){
        string s1 = qe.front();
        qe.pop();
        cout << s1 << " ";
        qe.push(s1 + "0");
        qe.push(s1 + "1");
    }
    cout << endl;
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