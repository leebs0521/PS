/*
    BOJ 15990 - 1,2,3 더하기 5
    url: https://www.acmicpc.net/problem/15990
    Silver 2 
    date: 2021. 9. 28
*/

#include <iostream>
#define MAX 100001
using namespace std;

long long dp[MAX][4], arr[MAX];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;

    cin >> t;

    dp[1][1] = 1;
    dp[2][2] = 1;
    dp[3][1] = 1;
    dp[3][2] = 1;
    dp[3][3] = 1;

    for(int i=4;i<MAX;i++){

        // 마지막에 1 더해주는 경우 => i-1이 (2 or 3)으로 끝나는 경우의 합)
        dp[i][1] = (dp[i-1][2] + dp[i-1][3])%1000000009;
        // 마지막에 2 더해주는 경우 => i-2가 (1 or 3)으로 끝나는 경우의 합
        dp[i][2] = (dp[i-2][1] + dp[i-2][3])%1000000009;
        // 마지막에 3 더해주는 경우 => i-3이 (2 or 3)으로 끝나는 경우의 합
        dp[i][3] = (dp[i-3][1] + dp[i-3][2])%1000000009;
    }
    while(t--){
        int n;
        long long ans;

        cin >> n;

        ans = (dp[n][1] + dp[n][2] + dp[n][3])%1000000009;
        
        cout << ans << "\n";
    }
    return 0;
}