#include <bits/stdc++.h>
using namespace std;

char v[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
int vNum(string s){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int cnt = 0;
    for(int i = 0; i < s.length(); i++){
        for(int j = 0; j < sizeof(v); j++){
            if(s[i] == v[j]) cnt++;
        }
    }

    return cnt;
}


int main(void){
    while(1){
        string s;
        getline(cin, s);
        if(s == "#"){
            break;
        }
        cout << vNum(s) << '\n';
    
    }
}