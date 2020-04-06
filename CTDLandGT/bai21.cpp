#include <bits/stdc++.h>
using namespace std;

char X[100000];
int n;
bool unvisited[100000];
string s;
void Result();
void Try(int i);
void Init();

int main()
{
    int T;
    cin >> T;
    while(T--){
        cin >> s;
        s=' '+s;
        n=s.size()-1;
        Init();
        Try(1);
        cout << endl;
    }
    return 0;
}

void Init(){
    for(int i=1;i<=n;i++)
        unvisited[i]=true;
}
void Result(){
    for(int i=1;i<=n;i++)
        cout << X[i];
    cout << ' ';
}
void Try(int i)
{
    for(int j=1;j<=n;j++){
        if(unvisited[j]){
            X[i]=s[j];
            unvisited[j]=false;
            if(i==n)
                Result();
            else
                Try(i+1);
            unvisited[j]=true;
        }
    }
}
 