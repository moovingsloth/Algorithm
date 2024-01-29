#include <iostream>
#include <list>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    list<char> L;
    while(n--){}
        auto cursor = L.begin();

        string s;
        cin >> s;
        for(int i : s){
            if(i == '-'){
                if(cursor != L.begin()){
                    cursor--;
                    L.erase(cursor);
                }
            }
            else if(i == '<'){
                if(cursor != L.begin()) i--;
            }
            else if(i == '>'){
                if(cursor != L.end()) i++;
            }
            else{
                L.push_back(i);
            }

        }
    for(auto i : L) cout << i;

}