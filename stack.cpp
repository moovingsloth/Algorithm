#include <iostream>
#include <stack>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //push, pop, top, empty, size
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.size() << "\n";
    if(s.empty()) cout << "s is not empty";
    s.pop();
    cout << s.top() << "\n";
    s.pop();
    if(s.empty()) cout << "s is empty\n";
    cout << s.top() << "\n"; //stack이 비어 있는경우 runtime error!

}