// số nhỏ nhất sao cho có d chữ số và có tổng các chữ số =s

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int s,d;
        cin>>s>>d;
       string x="";
       if(s>9*d) cout<<"-1";
       else{
            if(s<=9){
                for(int i=0;i<d;i++){
                    if(i==d-1){
                        x+=(char)(s+'0');
                        break;
                    }
                    x+='1';
                    s--;
                }
                cout<<x;
            }
            else{
                while(s>9){
                    x+='9';
                    s-=9;
                }
                x+=(char)(s+'0');
                reverse(x.begin(),x.end());
                cout<<x;
            }
       }
       cout<<endl;
    }
}