#include <iostream>
#include <deque>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    deque<int> DQ;
    int n,k;
    int cnt = 0;
    cin >> n >> k;

    for(int i = 1; i <= n; i++){
        DQ.push_back(i);
    }
    for(int i = 0; i < k; i++){
        int N;
        cin >> N;

        int idx = find(DQ.begin(), DQ.end() + 1, N) - DQ.begin();
        while(DQ.front() != N){
            if(idx < DQ.size() - idx){
                DQ.push_back(DQ.front());
                DQ.pop_front();
            }   
            else{
                DQ.push_front(DQ.back());
                DQ.pop_back();
            }
            cnt++;
        }
        DQ.pop_front();
    }
    cout << cnt;
}