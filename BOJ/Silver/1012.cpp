/*
    BOJ 1012 - 유기농 배추
    url: https://www.acmicpc.net/problem/1012
    Silver 2
    date: 2022.3.13
*/

#include <iostream>
#include <queue>
#define endl "\n"

using namespace std;

int T, M, N, K;
bool arr[50][50];
queue<pair<int,int>> q;
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

void bfs(int i, int j){
    q.push({i,j});
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;

        q.pop();

        arr[x][y] = false;
        for(int i=0;i<4;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if((nx>=0 && ny>=0 && nx < N && ny < M) && arr[nx][ny]){
                q.push({nx,ny});
                arr[nx][ny] = false;
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> T;

    while(T--){

        int cnt = 0;

        // M, N. K 입력
        cin >> M >> N >> K;

        // k개의 배추 위치 입력
        for(int i=0;i<K;i++){
            int x, y;
            cin >> y >> x;
            arr[x][y] = true;
        }

        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                if(arr[i][j]){
                    cnt++;
                    bfs(i,j);
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
