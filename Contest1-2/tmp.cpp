#include<bits/stdc++.h>

using namespace std;

int a[100];
int x[100];
bool check=false;
vector<bool> mark1(100,true);
vector<bool> mark2(100,true);
int tt[100];

bool check1(){
    int sum=x[1];
    for(int i=2;i<=5;i++){
        if(tt[i-1]==1) sum+=x[i];
        if(tt[i-1]==2) sum-=x[i];
        if(tt[i-1]==3) sum*=x[i];
    }
    if(sum==23) return true;
    else return false;
}

void Try2(int i){
    for(int j=1;j<=3;j++){
        tt[i]=j;
        if(i==4){
            if(check1()) check=true;
        }
        else Try2(i+1);
    }
}

void Try1(int i){
    for(int j=1;j<=5;j++){
        if(mark2[j]){
            x[i]=a[j];
            mark2[j]=false;
            if(i==5)  Try2(1);
            else Try1(i+1);
            mark2[j]=true;
        }
    }
}


int main(){
    int t;
    cin>>t;
    while(t--){
        for(int i=1;i<=5;i++){
            cin>>a[i];
        }
        for(int i=1;i<=10;i++){
            mark1[i]=true;
            mark2[i]=true;
        }
        check=false;
        Try1(1);
        if(check) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}