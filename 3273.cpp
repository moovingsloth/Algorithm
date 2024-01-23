#include <bits/stdc++.h>
using namespace std;

bool occur[2000001];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, X;
    int arr[10];
    cin >> N;
    for(int i = 0; i < N; i++) cin >> arr[i];
    cin >> X;

    int cnt = 0;
    for(int i = 0; i < N; i++){
        if(X - arr[i] > 0 && occur[X - arr[i]]) cnt++;
        occur[arr[i]] = true;
    }
    cout << cnt;
}