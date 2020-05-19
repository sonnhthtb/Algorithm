// tìm X có trong mảng hay không

#include<bits/stdc++.h>

using namespace std;

int b_search(int a[], int l, int r,int x){
    if(l<=r){
        int mid = r + (l - r) / 2;
        cout << l << ' ' << r <<" "<<mid<< endl;
        if(a[mid]==x) return 1;
        if(a[mid]>x)
            return (a, l, mid - 1, x);
        else
            return (a, mid + 1, r, x);
    }
    return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int a[n + 5];
        for (int i = 0; i < n;i++){
            cin >> a[i];
        }
        sort(a, a + n);
        cout << b_search(a, 0, n - 1,x);
        cout << endl;
    }
}