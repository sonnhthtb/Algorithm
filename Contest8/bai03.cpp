#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

void Input()
{
}

void Solve()
{
    int n;
    deque<int> dq;
    string s;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        getline(cin, s);
        if (s[1] == 'U')
        {
            if(s[4]=='F'){
                int tmp = 0;
                for (int j = 10; j < s.size(); j++){
                    tmp = tmp * 10 + (s[j] - '0');
                }
                dq.push_front(tmp);
            }
            if(s[4]=='B'){
                int tmp = 0;
                for (int j = 9; j < s.size(); j++)
                {
                    tmp = tmp * 10 + (s[j] - '0');
                }
                dq.push_back(tmp);
            }
        }
        if (s[1] == 'R')
        {
            if(!dq.empty()){
                if (s[5] == 'F')
                {
                    cout << dq.front() << endl;
                }
                if (s[5] == 'B')
                {
                    cout << dq.back() << endl;
                }
            }
            else
                cout << "NONE" << endl;
        }
        if (s[1] == 'O')
        {
            if(!dq.empty()){
                if (s[3] == 'F')
                {
                    dq.pop_front();
                }
                if (s[3] == 'B')
                {
                    dq.pop_back();
                }
            }
        }
    }
}
int main()
{
    int T=1;
    while (T--)
    {
        Input();
        Solve();
    }
    return 0;
}