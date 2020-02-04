#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
 
 
int main(void){
	std::ios::sync_with_stdio(false);
	int test;
	cin >> test;
	while(test--){
		string dic = "abcdefghijklmnopqrstuvwxyz";
		string dic2 = dic;
		int t[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
		string s;
		int res = 0, n, cong = 1;
		cin >> s;
		n = s.length();
		for(int i = 0; i < n; i++){
			if(s[i] >= 'a' && s[i] <= 'z'){
				t[dic[s[i]-97]-97] = 1;
				if(i >= 2 && i < n && s[i-1] == s[i-2]){
					if(s[i-1] == '-') {
						dic[s[i]-97]--;
						dic2[s[i]-97]--;
					} else if(s[i-1] == '+') {
						dic[s[i]-97]++;
						dic2[s[i]-97]++;
					}
				}else if(i >= 0 && i < n - 2 && s[i+1] == s[i+2]){
					if(s[i+1] == '-') {
						dic2[s[i]-97]--;
					} else if(s[i+1] == '+') {
						dic2[s[i]-97]++;
					}
				}
				if(cong){
					res += dic[s[i]-97] - 96;
				} else {
					res -= dic[s[i]-97] - 96;
				}
				if(i < n-2){
					if(s[i+1] == s[i+2]){
						if(s[i+1] == '+') cong = 0;
						else cong  = 1;
					}else {
						if(s[i+1] == '+') cong = 1;
						else cong  = 0;
					}	
				}
			}
		}
		cout << "Expression: " << s << endl;
		cout << "value = " << res << endl;
		for(int i = 0; i < 26; i++){
			if(t[i] == 1){
				cout << char(i+97) << " = " << int (dic2[i] - 96) << endl;
			}
		}
	}
	return 0;
}
  