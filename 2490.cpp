#include <bits/stdc++.h>

using namespace std;

int main(void){
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    int count;
    for(int i = 0; i < 4 ;i++){
        if(a[i] == 1) count++;
    }
    if(count == 0) cout << "E";
    else if(count == 1) cout << "A";
    else if(count == 2) cout << "B";
    else if(count == 3) cout << "C";
    else cout << "D";
    return 0;
}