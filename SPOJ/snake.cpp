

#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    bool check=true;
    for(int i=0;i<n-2;i++){
        if(s[i]=='4' && s[i+1]=='4' && s[i+2]=='4') check=false;
    }
    for(int i=0;i<n;i++){
        if(s[i]!='1' && s[i]!='4') check=false;
    }
    if(s[0]!='1') check=false;
    if(check) cout <<"YES"<< endl;
    else cout <<"NO"<<endl;
}