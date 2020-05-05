// phần tử thứ k;

#include<bits/stdc++.h>

using namespace std;

int search(int a[], int b[], int m, int n, int k){
    int arr[m+n];
    int i=0,j=0,d=0;
    while(i<m && j<n){    
        if(a[i]<b[j]) arr[d++]=a[i++];
        else arr[d++]=a[j++];
    }
    while(i<m) arr[d++]=a[i++];
    while(j<n) arr[d++]=a[j++];
   return arr[k-1];
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n,k;
        cin>>m>>n>>k;
        int a[m],b[n];
        for(int i=0;i<m;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        cout<<search(a,b,m,n,k);
        cout<<endl;
    }
}