#include <iostream>
#include <queue>
using namespace std;

const int MX = 1000005;
int dat[MX];
int head, tail = 0;
void push(int x){
        dat[tail++];
    }
    void pop(){
        head++;
    }
    int front(){
        return dat[head];
    }
    int back(){
        return dat[tail-1];
    }

int main(void){
    queue<int> Q;
    Q.push(10);
    Q.push(20);
    Q.push(30);
    cout << Q.size() << '\n';

    if(Q.empty()) cout << "Q is empty";
    Q.pop();
    cout << Q.front() << '\n';
    cout << Q.back() << '\n';
    Q.push(40);
    Q.pop();
    cout << Q.front() << '\n';
}