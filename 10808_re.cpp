#include <iostream>
#include <string>

using namespace std;

string s;

int main(){
    cin >> s;
    for(char i = 'a'; i <= 'z'; i++){
        int cnt = 0;
        for(auto c : s){
            if(c == i) cnt++;
        }
        cout << cnt << " ";
    }
}