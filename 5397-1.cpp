#include <iostream>
#include <list>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        list<char> L = {};
        string s;
        cin >> s;
        auto p = L.begin();
        for(auto i : s){
            if(i == "<"){
                if(p != L.begin()) i--;
            }
            else if(i == ">"){
                if(p != L.begin()) i++;
            }
            else if(i == "-"){
                if(p != L.begin()){
                    p--;
                    p = L.erase(p);
                }
            }
            else
                L.insert(p,i);
        }
        foro(auto  i : L) cout << i;
        cout << "n";
    }
}