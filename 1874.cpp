#include <iostream>
#include <stack>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    stack<int> l;
    string ans;
    int c = 1;


    for(int i = 0; i < N; i++){
        int p;
        cin >> p;
        while(c <= p){
            l.push(c++);
            ans += "+\n";
        }

        if(l.top() != p){
            cout << "NO\n";
            return 0;
        }
        l.pop();
        ans += "-\n";
    }
    cout << ans;
}