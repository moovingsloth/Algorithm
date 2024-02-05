#include <iostream>
#include <deque>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    deque<int> DQ;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(s == "push_front"){
            int num;
            cin >> num;
            DQ.push_front(num);
        }
        else if(s == "push_back"){
            int num;
            cin >> num;
            DQ.push_back(num);
        }
        else if(s == "pop_front"){
            if(DQ.empty()){
                cout << -1 << "\n";
            }
            else{
                cout << DQ.front() << "\n";
                DQ.pop_front();
            }
        }
        else if(s == "pop_back"){
            if(DQ.empty()){
                cout << -1 << "\n";
            }
            else{
                cout << DQ.back() << "\n";
                DQ.pop_back();
            }
        }
        else if(s == "size") cout << DQ.size() << "\n";
        else if(s == "empty") cout << DQ.empty() << "\n";
        else if(s == "front"){
            if(DQ.empty()){
                cout << -1 << "\n";
            }
            else cout << DQ.front() << "\n";
        }
        else{ //back
            if(DQ.empty()){
                cout << -1 << "\n";
            }
            else cout << DQ.back() << "\n";
        }
    }
}