// giải phương trình bậc hai in ra nghiệm theo thứ tự tăng dần

#include<bits/stdc++.h>

using namespace std;

int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    if(a==0){
        if(b==0 && c==0) cout << "-1";
        else if(b==0 && c!=0) cout << "0";
        else{
            cout << "1\n";
            cout << fixed <<setprecision(5)<< -(double)c/b;
        }
    }
    else{
        long long delta=b*b-4*a*c;
        // cout << delta<<endl;
        // cout  << (double)sqrt(delta)*(double)sqrt(delta)<<endl<<(double)sqrt(delta)<<endl;
        if(delta<0) cout<<"0";
        else if(delta==0){
            double x=(double)-1.0*b/(2.0*a);
            cout<<"1"<<endl;
            cout<<fixed<<setprecision(5)<<x;
        }
        else{
            cout<<"2"<<endl;
            double tmp=(double)sqrt(delta);
            // cout << tmp<<endl;
            double x1=(double)(-b-tmp)/2.0*a;
            double x2=(double)(-b+tmp)/2.0*a;
            if(x1>x2) swap(x1,x2);
            cout<<fixed<<setprecision(5)<<x1<<endl;
            cout<<fixed<<setprecision(5)<<x2;
        }
    }
}

//Code by Minh Chau