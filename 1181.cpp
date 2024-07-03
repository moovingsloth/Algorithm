#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;

    vector<string> v;
    for(int i = 0; i < num; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end(), [](const string &s1, const string &s2){
        if(s1.size() == s2.size()){
            return s1 < s2;
        }
        return s1.size() < s2.size();
    });

    auto a = unique(v.begin(), v.end());

    v.erase(a, v.end());

    for(auto i : v){
        cout << i << " ";
    }
}