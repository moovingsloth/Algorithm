#include <iostream>
#include <list>
#include <algorithm>
#include <vector>
using namespace std;

int a[9], sum;
int n = 9, r = 7;
vector<int> v;
pair<int, int> ret;

void solve(){
  int sum = 0;
  for(int i = 0; i < r; i++){
    sum += a[i];
  }
  if(sum == 100){
    a.sort(a + 7);
    exit(0);
    return;
  }
}

void makePermutation(int n, int r, int depth){
    if(r == depth){
        solve();
        return;
    }
    for(int i = depth; i < n; i++){
        swap(a[i], a[depth]);
        makePermutation(n, r, depth + 1);
        swap(a[i], a[depth]);
    }
    return;
}
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
    makePermutation(n, r, 0);
}