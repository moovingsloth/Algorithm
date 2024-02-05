#include <iostream>
#include <queue>
using namespace std;
queue<int> Q;
int main(void){
    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        if(s == "push"){
            int n;
            cin >> n;
            Q.push(n);
        }
        else if(s == "pop"){
            if(Q.empty()){
                cout << -1 << "\n";
            }
            else{
                cout << Q.front();
                Q.pop();
            }
        }
        else if(s == "size"){
            cout << Q.size() << "\n";
        }
        else if(s == "empty"){
            cout << (int)Q.empty() << "\n";
        }
        else if(s == "front"){
            if(Q.empty()){
                cout << "-1" << "\n";
            }
            else cout << Q.front() << "\n";
        }
        else{
            if(Q.empty()){
                cout << "-1" << "\n";
            }
            else cout << Q.back() << "\n";
        }
    }
}