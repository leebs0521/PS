/*
    BOJ 2563 - 색종이
    url: https://www.acmicpc.net/problem/2563
    Silver 5
    date: 2022. 11. 10
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int paper[101][101] ={0,};

    int t, cnt = 0;

    cin >> t;

    while(t--){
        int r, c;

        cin >> r >> c;

        for(int i=r; i<r+10; i++){
            for(int j=c; j<c+10; j++){
                paper[i][j] = 1;
            }
        }
    }

    for(int i=1;i<101;i++){
        for(int j=1;j<101;j++){
            if(paper[i][j] == 1)
                cnt++;
        }
    }

    cout << cnt;
    return 0;
}