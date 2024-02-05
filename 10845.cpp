#include <iostream>
#include <string>
#include <queue>
using namespace std;
queue<int> Q;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        if(s == "push"){
            int K;
            cin >> K;
            Q.push(K);
        }
        else if(s == "front"){
            cout << Q.front() << '\n';
        }
        else if(s == "back"){
            cout << Q.back() << '\n';
        }
        else if(s == "pop"){
            if(Q.empty()){
                cout << "-1" << '\n';
            }
            else{
                Q.pop();
                cout << Q.front() << '\n';
            }
        }
    }

    
}