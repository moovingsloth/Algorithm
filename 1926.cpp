#include <iostream>
#include <queue>
using namespace std;

int board[502][502];
int vis[502][502];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int n, m;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;

    int mx = 0, num = 0;

    
    //board 채우기
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> board[i][j];
        }
    }
    //이중 for문 돌며 bfs 시작점 여부 판단
    for(int i = 0; i  < n; i++){
        for(int j = 0; j < m; j++){
            if(board[i][j] == 0 || vis[i][j]) continue;
            num++;
            //queue 생성하기
            queue<pair<int, int>> Q;
            vis[i][j] = 1;
            Q.push({i,j});
            int area = 0;
            while(!Q.empty()){
                pair<int, int> cur = Q.front();
                Q.pop();
                area++;


                for(int dir = 0; dir < 4; dir++){
                    int nx = cur.first + dx[dir];
                    int ny = cur.second + dx[dir];
                    if(nx < 0 || nx >= n || ny < 0 || n >= m) continue;
                    if(vis[nx][ny] || board[nx][ny] != 1) continue;
                    vis[nx][ny] = 1;
                    Q.push({nx, ny});
                }
            }
            mx = max(mx, area);
        }
    }  
    cout << 'num\n' << mx;
}