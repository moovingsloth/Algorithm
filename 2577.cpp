#include <bits/stdc++.h>
using namespace std;

int freq[10];
int main(void){
    int a, b, c;
    cin >> a >> b >> c;
    int res = a * b * c;
    int div =10;
    while(res>0){
        freq[res%10]++;
        res/=10;
    }
    for(int i = 0; i < 10; ++i) cout << freq[i] << "\n";
}