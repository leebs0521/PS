/*
    BOJ 11660 - 구간 합 구하기 5
    url: https://www.acmicpc.net/problem/11660
    Silver 1
    date: 2022. 8. 26
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int dp[1025][1025] = {0, };
    int n, m, num;
    int x1, x2, y1, y2;

    cin >> n >> m;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> num;

            dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + num;
        } 
    }

    for(int i=0;i<m;i++){
        cin >> x1 >> y1 >> x2 >> y2;
        cout << dp[x2][y2] - dp[x2][y1-1] - dp[x1-1][y2] + dp[x1-1][y1-1] << endl;
    }
    return 0;
}