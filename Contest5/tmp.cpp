
#include<bits/stdc++.h>
using namespace std;
int main(){
    string output="shutdown /s";
    const char *command = output.c_str();
    system(command);
}