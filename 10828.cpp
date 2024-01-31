#include <iostream>
#include <stack>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    stack<int> s;
    for(int  i = 0; i < n; i++){
        string S;
        cin >> S;
        if(S == "push"){
            int k;
            cin >> k;
            s.push(k);
        }
        else{
            if(S == "pop"){
                if(s.empty()) cout << -1 << "\n";
                else {
                    cout << s.top() << "\n";
                    s.pop();
                }
            }
            else if(S == "top"){
                if(s.empty()) cout << -1 << "\n";
                else cout << s.top() << "\n";
            }
            else if(S == "size"){
                cout << s.size() << "\n";
            }
            else {
                cout << int(s.empty()) << "\n";
            }
        }
    }
}
