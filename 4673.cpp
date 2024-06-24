#include <bits/stdc++.h>
using namespace std;

bool arr[10001] = {false};

int selfnum(int n){
    int tmp = n;
    while(tmp / 10 != 0){
        n += (tmp % 10);
        tmp /= 10;
    }
    n += tmp;
    return n;
}

int main(){
    for(int i = 1; i < 10001; i++){
        arr[selfnum(i)] = true;
    }
    for(int i = 1; i < 10001; i++){
        if(!arr[i]){cout << i << '\n';}
    }
}