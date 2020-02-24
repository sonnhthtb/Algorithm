// chế tạo tên lửa n tầng vs trọng lượng tối thiểu

#include<bits/stdc++.h>

using namespace std;
bool cmp(int a,int b){
    return a>b;
}
int main(){
    int a[]={1,2,3,4,5};
    sort(a,a+5,cmp);
    for(auto x:a) cout << x;
}