#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

string board[502];
int dist[502][502];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int n, m;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;

    //board에 입력
    for(int i = 0; i < n; i++){
        cin >> board[i];
    }
    for(int i = 0; i < n; i++){
        fill(dist[i], dist[i] + m, -1);
    }
    //현재 상황 기록할 queue 추가
    queue<pair<int, int>> Q;

    //dist에 초기 지점
    dist[0][0] = 0;
    Q.push({0, 0});

    while(!Q.empty()){
        pair<int, int> cur = Q.front();
        Q.pop();
        //상하좌우 방문
        for(int dir = 0; dir < 4; dir++){
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if(nx  < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(board[nx][ny] != '1' || dist[nx][ny] >= 0) continue;

            Q.push({nx, ny});
            dist[nx][ny] = dist[cur.first][cur.second] + 1;
        }
    }
    cout << dist[n-1][m-1] + 1;
}