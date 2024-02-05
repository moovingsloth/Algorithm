#include <iostream>
#include <stack>
#include <list>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    stack<int> s; //원래 list(현재 탑)
    stack<int> idx;

    for(int i = 1; i <= N; i++){
        int height;
        cin >> height;
        if(s.empty()){
            cout << "0" << " ";
            s.push(height);
            idx.push(i);
        }
        else{
            //기둥 찾기

            //못 찾음
            if(s.top() <= height){
                s.pop();
                idx.pop();
            }
            else{
                //찾음
                cout << idx.top();
            }
            //현재 값 push
            s.push(height);
            idx.push(i);
        }
    }
}