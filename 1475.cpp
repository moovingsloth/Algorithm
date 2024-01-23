#include <bits/stdc++.h>
using namespace std;

int main(void){
    int arr[10];
    int Number;
    int max = 0;
    cin >> Number;
    while(Number>0)
    {
        arr[Number%10]++;
        Number/=10;
    }
    
    for(int i = 0; i < 10; i++){
        if(i == 6 || i == 9) continue;
        max = max(max, arr[i]);
    }

    max = max(max, (arr[6] + arr[9] + 1) / 2);
    cout << max;
}