/*
    BOJ 3085 - 사탕 게임
    url: https://www.acmicpc.net/problem/3085
    Silver 4 
    date: 2021. 10. 1
*/

#include <iostream>
#include <algorithm>

#define endl "\n"

using namespace std;

char board[50][50];



int n, big = -1;

void check(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char a = board[i][j];
            int seqRow = 1, seqCol = 1;

            // 가로 방향 연속 체크
            for(int k=j+1;k<n;k++){
                if(a == board[i][k])
                    seqRow++;
                else
                    break;
            }
            
            // 세로 방향 연속 체크
            for(int k=i+1;k<n;k++){
                if(a == board[k][j])
                    seqCol++;
                else
                    break;
            }

            // 기존 값보다 크면 갱신
            big = max(big, max(seqRow, seqCol));
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin >> board[i][j];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            // 가로 방향 끼리 교환
            if(j+1<n){
                swap(board[i][j],board[i][j+1]);
                check();
                swap(board[i][j],board[i][j+1]);
            }

            // 세로 방향 끼리 교환
            if(i+1<n){
                swap(board[i][j],board[i+1][j]);
                check();
                swap(board[i][j],board[i+1][j]);
            }
        }
    }

    cout << big;
    return 0;
}