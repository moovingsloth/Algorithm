#include <bits/stdc++.h>
using namespace std;

//전역으로 선언하여 0으로 채워짐
int freq[26];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin >> str;
    for(auto c : str)
        freq[c-'a']++;
    for(int i = 0; i < 26; i++)
        cout << freq[i] << ' ';

}