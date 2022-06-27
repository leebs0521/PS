/*
    BOJ 2583 - 영역 구하기
    url: https://www.acmicpc.net/problem/2583
    Silver 1
    date: 2022. 6. 27
*/

#include <iostream>
#include <algorithm>

#define endl "\n"

using namespace std;


int m, n, k, cnt, arrCnt;
int arr[10000];
int map[101][101];
int moveX[4] = {0,0,-1,1};
int moveY[4] = {1,-1,0,0};

void DFS(int a, int b){
    if(map[a][b] == 0){
        map[a][b] = 1;
        ++cnt;
        for(int i=0;i<4;++i){
            int x = moveX[i] + a;
            int y = moveY[i] + b;

            if(x >=0 && y >= 0 && x<m && y<n){
                DFS(x,y);
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> m >> n >> k;

    int x1, y1, x2, y2;
   
    while(k--){
        cin >> x1 >> y1 >> x2 >> y2;

        for(int i=y1; i<y2; i++)
            for(int j=x1; j<x2; j++)
                map[i][j] = 1;
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(map[i][j] == 0){
                cnt=0;
                DFS(i,j);
                arr[arrCnt++] = cnt;
            }
        }
    }

    sort(arr, arr+arrCnt);
    
    cout << arrCnt << endl;

    for(int i=0;i<arrCnt;i++){
        cout << arr[i] << " ";
    }
    return 0;
}