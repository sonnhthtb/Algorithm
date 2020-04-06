#include <bits/stdc++.h>
using namespace std;
int n,a[1000],T[1000];
void Display(int maxx){
    if(maxx ==1) cout << "("<<a[maxx]<<") ";
    else{
        cout << "("<<a[1]<<" ";
        for(int i=2;i<maxx;i++){
            cout << a[i]<<" ";
        }
        cout <<a[maxx]<<") ";
    }
}
void Try(int i){
    for(int j=n-T[i-1];j>=1;j--){
        if(j<=a[i-1]){
            a[i]=j;
            T[i]=T[i-1]+j;
            if(T[i]==n) Display(i);
            else Try(i+1);
        }
    }
}
void Solve(){
    cin >> n;
    a[0]=n;
    T[0]=0;
    Try(1);
    cout <<endl;
}
int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}