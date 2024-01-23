#include <bits/stdc++.h>
using namespace std;

int res = 0;
int arr[2][1001];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    
    for(int i = 0; i < n; ++i){
        int t1,t2;
        cin >> t1 >> t2;
        arr[t1][t2]++;
    }

    for(int i = 0; i < 2; ++i){
        for(int j = 1; j < 7; ++j){
            res += arr[i][j] / k;
            if(arr[i][j] > 0) res++;
        }
    }
    cout << res;
}