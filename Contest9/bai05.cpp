// biểu diễn đồ thị có hướng

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> sunn[1005];
        int v, e;
        cin >> v >> e;
        for (int i = 1; i <= e;i++){
            int x, y;
            cin >> x >> y;
            sunn[x].push_back(y);
        }
        for (int i = 1; i <= v;i++){
            cout << i << ": ";
            for (int j = 0; j < sunn[i].size();j++){
                cout << sunn[i][j] << " ";
            }
            cout << endl;
        }
    }
}