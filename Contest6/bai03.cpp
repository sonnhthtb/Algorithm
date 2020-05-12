// số phép đổi chỗ ít nhất để đk mảng sắp xếp;

#include<bits/stdc++.h>

using namespace std;

struct mincy{
    int x;
    int pos;
};
bool sapxep(mincy a, mincy b){
    return a.x < b.x;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int dem=0;
        mincy a[n + 5];
        for(int i=0;i<n;i++){
            cin>>a[i].x;
            a[i].pos = i;
        }
        stable_sort(a, a + n,sapxep);
        vector<bool> vis(n, false);
        int ans = 0;
        for (int i = 0; i < n;i++){
            if(vis[i] || a[i].pos==i)
                continue;
            int cycle_size = 0;
            int j = i;
            while(!vis[j]){
                vis[j] = 1;
                j = a[j].pos;
                cycle_size++;
            }
            if(cycle_size>0)
                ans += (cycle_size - 1);
        }
        cout << ans;
        cout << endl;
    }
}