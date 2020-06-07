// kiểm tra dãy ngoặc đúng

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<int> a[10000];
    for (int i = 1; i <= n; i++)
    {
        string s;
        getline(cin, s);
        int tmp = 0;
        for (int j = 0; j <= s.size();j++){
            if(j == s.size() || s[j]==' ' ){
                a[i].push_back(tmp);
                tmp = 0;
            }
            else{
                tmp = tmp * 10 + s[j] - '0';
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        sort(a[i].begin(), a[i].end());
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
            if (a[i][j] > i)
            {
                cout << i << " " << a[i][j] << endl;
            }
        }
    }
}