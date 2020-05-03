// tính n^r vs r là đảo của n kq modulo

#include<bits/stdc++.h>
const long long base=1e9+7;

using namespace std;

long long modulo(long long x, long long r){
    if(r==0) return 1;
    long long m=modulo(x,r/2);
    if(r%2==0) return m*m%base;
    else return x*(m*m%base)%base;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,r=0;
        cin>>n;
        long long x=n;
        while(n>0){
            int k=n%10;
            r=r*10+k;
            n/=10;
        }
        //cout<<x<<" "<<r;
         cout<<modulo(x,r);
         cout<<endl;
    }
}