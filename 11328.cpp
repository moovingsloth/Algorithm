#include <bits/stdc++.h>
using namespace std;

int freq[26];

int main(void){
    int n;
    cin >> n;
    for(int i =0; i < n; i++){
        string a, b;
        cin >> a >> b;
        for(auto c : a) freq[c - 'a']++;
        for(auto c : b) freq[c - 'a']--;
        bool isPossible = true;

        for(int i : freq){
            if(i != 0) isPossible = false; 
        }
        if(isPossible) cout << "Possible\n";
        else cout << "Impossible\n";
    }
}