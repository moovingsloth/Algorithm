#include <iostream>
#include <stack>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    stack<int> s;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        if(num == 0){
            s.pop();
        }
        else 
            s.push(num);        
    }

    int sum = 0;
    while(!s.empty()){
        sum += s.top();
        s.pop();
    }
    cout << sum;
}