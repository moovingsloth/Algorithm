#include <iostream>
using namespace std;

string s;
int ret = 1;
int main(){
    cin >> s;
    for(int i = 0; i <= s.length() / 2; i++){
        if(s[i] != s[s.length() - i - 1]){
            ret = 0;
        }
    }
    cout << ret;
}