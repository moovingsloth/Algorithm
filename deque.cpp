#include <iostream>
using namespace std;

const int MX = 1000005;
//양쪽으로의 확장을 위한 시작 지점을 중간에
int dat[2*MX + 1]; 
int head = MX, tail = MX; 

void push_front(int x){
    dat[--head] = x;
}

void push_back(int x){
    dat[tail++] = x;
}

void pop_front(){
    head++;
}

void pop_back(){
    tail--;
}

int front(){
    return dat[head];
}

int back(){
    return dat[tail-1];
}




int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
}