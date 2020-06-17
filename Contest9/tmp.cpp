#include <bits/stdc++.h>

using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
long long Create(long long l, long long r)
{
    return rng() % (r - l + 1) + l;
}
int main(){
    int n = 72;
    while(n--){
        string s = "";
        for (int i = 0; i < 6; i++){
            int x = Create(97, 122);
            s += char(x);
        }
        cout << s << endl;
    }

    return 0;

}