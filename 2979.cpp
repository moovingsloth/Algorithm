#include <iostream>
using namespace std;
    int A, B, C;
    int a1, a2;
    int cnt[104];
    int ret = 0;

int main(void){
    cin >> A >> B >> C;
    for(int i = 0; i < 3; i++){
        cin >> a1 >> a2;
        for(int j = a1; j < a2; j++){
            cnt[j]++;
        }
    }
    for(int i = 1; i < 100; i++){
        if(cnt[i] == 1){
            ret += A;
        }
        else if(cnt[i] == 2){
            ret += B * 2;
        }
        else if(cnt[i] == 3){
            ret += C * 3;
        }
    }

    cout << ret;
}