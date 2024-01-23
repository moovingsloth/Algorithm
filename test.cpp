#include <bits/stdc++.h>
using namespace std;

int main(void){
    int arr[1][11];
    fill(arr[0], arr[0] + 11, 0);
    for(int i = 0; i < 1; i++){
        for(int j = 0; j < 11; j++){
            cout << arr[i][j] << " ";}
        cout << "\n";
    }
}