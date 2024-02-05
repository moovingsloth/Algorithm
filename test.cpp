#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    int n;
    n = s.top();

    cout << n;
}
