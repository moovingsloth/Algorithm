#include <bits/stdc++.h>
using namespace std;

int arr[1000001];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,v;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    cin >> v;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == v) cnt++;
    }
    cout << cnt;

}