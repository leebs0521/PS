/*
    BOJ 2193 - 이친수
    url: https://www.acmicpc.net/problem/2193
    Silver 3 
    date: 2021. 9. 28
*/

#include <iostream>

using namespace std;

long long dp[91][2];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;

    dp[1][1] = 1;
    dp[2][0] = 1;
    cin >> n;
    /*
        [n][0] -> [n-1][0] + [n-1][1] => 0으로 끝날 경우 그 전 자리 0, 1 둘다 가능
        [n][1] -> [n-1][0]            => 1으로 끝날 경우 그 전 자리 1만 가능
    
    */
    for(int i=3;i<=n;i++){
        for(int j=0;j<2;j++){
            if(j==0) dp[i][j] = dp[i-1][0] + dp[i-1][1];
            else if(j==1) dp[i][j] = dp[i-1][0];
        }
    }

    cout << dp[n][0] + dp[n][1];
    return 0;
}