#include <bits/stdc++.h>
using namespace std;
const long long base = 1e9+7;
struct MaTran
{
    int n;
    long long c[20][20]={0}; 
};
 
MaTran operator * (MaTran a, MaTran b)
{
    MaTran res;
    res.n=a.n;
    for (int i=0; i<=a.n; i++)
        for (int j=0; j<=b.n; j++)
        {
            res.c[i][j] = 0;
            for (int k=0; k<=b.n; k++)
                res.c[i][j] = (res.c[i][j]%base+((a.c[i][k]%base)*(b.c[k][j]%base))%base)%base;
        }
    return res;
}
 
MaTran powermod (MaTran a, long long k)
{
    MaTran tmp;
    tmp.n=a.n;
    if (k==1)
        return a;
    if (k%2!=0)
        return powermod(a,k-1)*a;
    tmp = powermod(a,k/2);
    return tmp*tmp;
}

void print(MaTran A){
    for(int i=0;i<A.n;i++){
        for(int j=0;j<A.n;j++){
            cout << A.c[i][j]<<' ';
        }
        cout << endl;
    }
}

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
        MaTran A;
        MaTran B;
        long long k;
	    cin >> A.n>> k;
        B.n=A.n;
        for(int i=0;i<A.n;i++){
            for(int j=0;j<A.n;j++){
                cin >> A.c[i][j];
                B.c[i][j]=1;
            }
        }
	    B = powermod(A,k);
        B.n=A.n;
        print(B);
	}
	return 0;
}