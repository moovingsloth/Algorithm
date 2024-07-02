#include <bits/stdc++.h>
using namespace std;

vector<int> arr;

int main(){
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }

    sort(arr.begin(), arr.end());

    for(auto i : arr){
        cout << i << '\n';
    }
}