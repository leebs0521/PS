/*
    BOJ 9663 - N-Queen
    url: https://www.acmicpc.net/problem/9663
    Gold 4
    date: 2022. 8. 6
*/

#include <iostream>

#define endl "\n"

using namespace std;

int n, cnt, board[15] ={0, };


bool Promise(int idx){
    for (int i = 0; i < idx; i++) {
		if (board[idx] == board[i] || idx - i == abs(board[idx] - board[i])) {
			return false;
		}
	}
	return true;
}
void NQueen(int curr_n){
    if(curr_n == n){
        cnt++;
    }
    else{
        for(int i=0;i<n;i++){
            board[curr_n] = i;
            if(Promise(curr_n))
                NQueen(curr_n+1);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;  

    NQueen(0);

    cout << cnt;
    return 0;
}