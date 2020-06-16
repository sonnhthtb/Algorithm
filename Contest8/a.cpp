// chuyen danh sach ke sang danh sach canh

#include<bits/stdc++.h>

using namespace std;
vector<int> ke[1005];

int main(){
    int n;
    cin>>n;
    cin.ignore();
    for (int i = 1; i <= n;i++){
        ke[i].clear();
    }
    for (int i = 1; i <= n;i++){
        string s;
        getline(cin, s);
        int x = 0;
        for (int j = 0; j <= s.size();j++){
            if(s[j]==' ' || j==s.size()){
                ke[i].push_back(x);
                x = 0;
            }
            else{
                x = x * 10 + (s[j] - '0');
            }
        }
    }
    for (int i = 1; i <= n;i++){
        for (int j = 0; j < ke[i].size();j++){
            if(ke[i][j]>i){
                cout << i << " " << ke[i][j] << endl;
            }
        }
    }
}
