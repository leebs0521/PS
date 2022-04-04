/*
    BOJ 7576 - 토마토
    url: https://www.acmicpc.net/problem/7576
    Gold 5
    date: 2022. 4. 4
*/

#include <iostream>
#include <queue>

#define endl "\n"

using namespace std;

int box[1001][1001];
int M, N;
int moveX[4] = {0,0,-1,1};
int moveY[4] = {1,-1,0,0};
queue<pair <int, int>> q;

int check(int y, int x){
    if(x>=0 && x<M && y>=0 && y <N)
        return 1;
    else
        return -1;
}

void bfs(){
    while(!q.empty()){
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        for(int i=0;i<4;i++){
            int newX = x+moveX[i];
            int newY = y+moveY[i];
            if(check(newY, newX) == 1 && box[newY][newX]==0) {
                box[newY][newX] = box[y][x]+1;
                q.push({newY, newX});
            }

        }
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int ans = 0;

    cin >> M >> N;

    for(int i=0; i<N;i++){
        for(int j=0;j<M;j++){
            cin >> box[i][j];
            if(box[i][j] == 1){
                q.push({i,j});
            }
        }
    }
    bfs();

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(box[i][j] == 0) {
                cout << "-1" << endl;
                return 0;
            }

            if(box[i][j] > ans)
                ans = box[i][j];
        }
    }
    cout << ans-1 << endl;
    return 0;
}