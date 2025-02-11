#include <iostream>
#include <list>
#include <algorithm>
#include <vector>
using namespace std;

int a[9], sum;
vector<int> v;
pair<int, int> ret;

void solve(){
  for(int i = 0; i < 9; i++){
    for(int j = i +1; j < 9; j++){
      if(sum - a[i] - a[j] == 100){
        ret = {i, j};
        return;
      }
    }
  }
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);


  // method 1 : do while next_permutation
  // sort(a, a + 9);
  // do{
  //   int sum = 0;
  //   for(int i = 0; i < 7; i++) sum += a[i];

  //   if(sum == 100)break;
  // }while(next_permutation(a, a + 9));
  // for(int i = 0; i < 7; i++) cout << a[i] << '\n';
  // return 0;

  // method 2 : ret, pair, vector
  // for(int i = 0; i < 9; i++){
  //   cin >> a[i];
  //   sum += a[i];
  // }
  // solve();
  // for(int i = 0; i < 9; i++){
  //   if(ret.first == i || ret.second == i) continue;
  //   v.push_back(a[i]);
  // }
  // sort(v.begin(), v.end());
  // for(int i : v) cout << i << '\n';
  // return 0;

  // method 3: 재귀함수
  
  
}