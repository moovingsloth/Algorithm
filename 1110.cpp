#include <iostream>
using namespace std;

//26 68 84 42 26//
int main(){
    int N;
    cin >> N;
    if(N == 0){
        cout << 1 << '\n';
        return 0;
    }
    int count = 1;
    int n = ((N % 10) * 10) + ((N / 10 + N % 10) % 10);
    while(n != N){
        n = ((n %  10) * 10) + ((n / 10 + n % 10) %10);
        count++;
    }
  
    cout << count << '\n';
}