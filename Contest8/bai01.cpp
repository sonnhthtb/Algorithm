#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

void Input(){
     
}

void Solve(){
    int n;
    deque<int> dq;
    string s;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++){
        getline(cin, s);
        int tmp = 0;
        switch (s[0])
        {
        case '1':
            cout << dq.size() << endl;
            break;
        case '2':
            if(dq.empty())
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            break;
        case '3':
            for (int j = 2; j < s.size(); j++){
                tmp = tmp * 10 + (s[j] - '0');
            }
            dq.push_back(tmp);
            tmp = 0;
            break;
        case '4':
            if(!dq.empty())
                dq.pop_front();
            break;
        case '5':
            if (!dq.empty())
                cout << dq.front() << endl;
            else
                cout << "-1" << endl;
            break;
        case '6':
            if (!dq.empty())
                cout << dq.back() << endl;
            else
                cout << "-1" << endl;
            break;
        }
    }
}
int main(){
    int T;
    cin >> T;
    while(T--){
        Input();
        Solve();
    }
    return 0;
}