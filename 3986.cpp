#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void){
    int N;
    cin >> N;
    int cnt = 0;

    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        stack<char> S;
        for(auto c : s){
            if(S.empty() || S.top() != c) {
                S.push(c);
            }
            else {
                S.pop();
            }
        }
        if(S.empty()) cnt++;
    }
    cout << cnt;
}