#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a, b, result = 1;
        cin >> a >>b;
        for(int j = 0; j < b; j++){
            result = (result*a) % 10;
        }
        if(result == 0) {cout << 10 << endl;}
        else{cout << result << '\n';}
    }
