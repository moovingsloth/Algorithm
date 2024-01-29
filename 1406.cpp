#include <iostream>
#include <list>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    int n;
    cin >> n;
    list<char> L;
     for(auto i : s) L.push_back(i);
     auto cursor = L.end();

    for(int i = 0; i < n; i++){
        char op;
        cin >> op;
        if(op == 'P'){
            char add;
            cin >> add;
            L.insert(cursor, add);

        }
        else if(op == 'D'){if(cursor != L.end()) cursor++;}
        else if(op == 'B'){
           if(cursor != L.begin()) {
               cursor--;
               cursor = L.erase(cursor);
           }
        }
        else { if(cursor != L.begin()) cursor--;}
    }     



    for(auto i : L) cout << i;

}