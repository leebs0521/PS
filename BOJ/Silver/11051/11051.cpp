/*
    BOJ 11051 - 이항 계수 2
    url: https://www.acmicpc.net/problem/11051
    Silver 2
    date: 2022. 8. 4
*/

#include <iostream>

#define endl "\n"

using namespace std;

long long dp[1001][1001];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, k;

    cin >> n >> k;

    dp[1][0] = dp[1][1] = 1;
    
    // dp[i][j] = dp[i-1][j-1] + dp[i-1][j]

    for(int i=2;i<1001;i++){
        for(int j=0;j<1001;j++){
            if(j == 0 || i == j)
                dp[i][j] = 1;
            else{
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % 10007;
            }
        }
    }

    cout << dp[n][k]%10007;
    return 0;
}

