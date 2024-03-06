#include <iostream>
#include <stack>
#include <string>
#include <utility>
#include <queue>

using namespace std;

int board[502][502] = {...};
int vis[502][502];
//행광 열의 개수
int m = 7, n = 10;
//상하좌우 반복문 처리를 위한 변수
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    //queue 생성
    queue<pair<int, int>> Q;

    //첫 좌표
    Q.push({0,0});
    vis[0][0] = 1;

    //queue가 비워지는 순간 상황 종료
    while(!Q.empty()){
        pair<int, int> cur = Q.front();
        Q.pop();
        //상하좌우 방문
        for(int dir = 0; dir < 4; dir++){
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            //nx, ny가 유효한 범위, board의 범위 내에 있는 지 확인
            //아래의 두 조건문의 뒤바뀔 경우 runtime 발생 가능
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(vis[nx][ny] || board[nx][ny] != 1) continue;
            //가능한 좌표 push, vis = 1
            Q.push({nx,ny});
            vis[nx][ny] = 1;
        }
    }
  
}
