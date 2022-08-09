/*
    BOJ 1149 - RGB거리
    url: https://www.acmicpc.net/problem/1149
    Silver 1
    date: 2022. 8. 9
*/

#include <iostream>

#define endl "\n"

using namespace std;

int dp[1001][3], cost[1001][3];
int n; 
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=0;j<3;j++){
            cin >> cost[i][j];
        }
    }

    for(int i=1;i<=n;i++){
        dp[i][0] = cost[i][0] + min(dp[i-1][1], dp[i-1][2]);
        dp[i][1] = cost[i][1] + min(dp[i-1][0], dp[i-1][2]);
        dp[i][2] = cost[i][2] + min(dp[i-1][0], dp[i-1][1]);
    }
    

    cout << min(dp[n][0], min(dp[n][1], dp[n][2]));
    return 0;
}