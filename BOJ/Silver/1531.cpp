/*
    BOJ 1531 - 투명
    url: https://www.acmicpc.net/problem/1531
    Silver 5
*/

#include <iostream>

using namespace std;

int arr[101][101];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N, M, i, j, cnt = 0;

    cin >> N >> M;
    // (x1,y1) (x2,y2) 입력 받아
    // (x1,y1) ~ (x2,y2) 카운트
    while(N>0){
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(i=x1;i<=x2;i++){
            for(j=y1;j<=y2;j++)
                arr[i][j]++;
        }
        N--;
    }
    // arr[i][j] > M 이면 안보이는 칸이므로 cnt++
    for(i=1;i<101;i++){
        for(j=1;j<101;j++){
            if(arr[i][j] > M)
                cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}