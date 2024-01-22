#include <bits/stdc++.h>
using namespace std;

void insert(int idx, int num, int arr[], int& len){
    for(int i = len; i < idx; i--) arr[i] = arr[i-1];
    arr[idx] = num;
    len++;
}

void erase(int idx, int arr[], int& len){
    for(int i = idx; i < len; i++) arr[i] = arr[i+1];
}


int main(void){
    int arr[10] = {10, 50, 40, 30, 70, 20};
    int len = 6;
    insert(3, 60, arr, len);
    for(int i = 0; i < 6; i++) cout << arr[i] << " ";
    cout << '|n';
    erase(4, arr, len);
    for(int i = 0; i < 5; i++) cout << arr[i] << " ";

}

//전체를 특정값으로 초기화시키는 함수
int a[21];
int b[21][21];

//1. memset
memset(a, 0, sizeof a);
memset(b, 0, sizeof b);

//단점 : 실수할 여지가 많다. 비추
//0 , 1, -2이 아닐경우 오류 발생 빈번

//2. for
for(int i = 0; i < 21; i++) a[i] = 0;
for(int i = 0; i < 21; i++)
    for(int j = 0; j < 21; j++)
        b[i][j] = 0;
//무난

//3. fill
fill(a, a+21, 0);
for(int i = 0; i < 21; i++)
    fill(b[i], b[i]+21, 0);
//익숙해진다면 가장 추천