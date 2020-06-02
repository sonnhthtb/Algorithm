// kiểm tra dãy ngoặc đúng

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> sunn;
        for (int i = 0; i < s.size(); i++)
        {
            if (sunn.empty())
                sunn.push(s[i]);
            else
            {
                if (sunn.top() == '(')
                {
                    if (s[i] == ')')
                        sunn.pop();
                    else
                        sunn.push(s[i]);
                }
                else if (sunn.top() == '[')
                {
                    if (s[i] == ']')
                        sunn.pop();
                    else
                        sunn.push(s[i]);
                }
                else if (sunn.top() == '{')
                {
                    if (s[i] == '}')
                        sunn.pop();
                    else
                        sunn.push(s[i]);
                }
            }
            cout << sunn.top() <<s[i]<< endl;
        }
        if (!sunn.empty())
            cout << "NO";
        else
            cout << "YES";
        cout << endl;
    }
}