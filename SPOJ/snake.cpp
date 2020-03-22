// dãy con có tổng lớn nhất

#include<bits/stdc++.h>

using namespace std;

bool check(int n, int a[]){
    for(int i=0;i<n;i++){
        if(a[i]>0) return true;
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    int a[n+5];
    int sum1=0,sum2=0;
    int max=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>0) sum1+=a[i];
        if(a[i]>max) max=a[i];
    }
    cout<<max;
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]>0){
            sum2+=a[i];
            while(a[i]==a[i+1]){
                i++;
            }
        }
    }
    if(check==false){
        sum1=sum2=max;
    }
    cout<<sum2<<" "<<sum1;
}