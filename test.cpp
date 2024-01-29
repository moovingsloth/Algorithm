#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    list<int> L;
    L.push_back(2);
    L.push_back(5); // Initializing list with an initializer list

    list<int>::iterator t = L.begin();
    
    L.push_front(10);
    cout << *t << "\n";
    
    L.push_back(5);
    t = L.insert(t, 6);
    t++;
    t = L.erase(t);
    
    cout << *t << '\n';
    for(auto i : L) cout << i << ' ';
    cout << '\n';
    for(list<int>::iterator it = L.begin(); it != L.end(); it++)
        cout << *it << ' ';
    
    return 0;
}
