#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int n;
void Input()
{
    cin >> n;
}

//BFS in a tree with 2 nodes are 0 and 9
void Solve()
{
    queue<string> qe;
    qe.push("9");
    while (1)
    {
        string s1 = qe.front();
        qe.pop();
        long long tmp=0;
        for (int i = 0; i < s1.size(); i++){
            tmp = tmp * 10 + (s1[i] - '0');
        }
        // cout << tmp << endl;
        if(tmp % n == 0){
            cout << s1;
            break;
        }
        qe.push(s1 + "0");
        qe.push(s1 + "9");
    }
    cout << endl;
}
int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        Input();
        Solve();
    }
    return 0;
}