/*
    BOJ 10844 - 쉬운 계단 수
    url: https://www.acmicpc.net/problem/10844
    Silver 1  
    date: 2021. 9 .28
*/

#include <iostream>

using namespace std;

long long dp[101][10];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    long long ans = 0;
    cin >> n;

    for(int i=1;i<10;i++)
        dp[1][i] = 1;
    
    /*  [n][0] -> [n-1][1]  => ---90(x)
        [n][k:1~8] -> [n-1][k-1] + [n-1][k+1]
        [n][9] -> [n-1][8]  => ---09 (x)
         
    */
    for(int i=2;i<=n;i++){
        for(int j=0;j<10;j++){
            if(j==0)    dp[i][j] = dp[i-1][j+1];
            else if(j==9)   dp[i][j] = dp[i-1][j-1];
            else    dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1])%1000000000;
        }
    }

    for(int i=0;i<10;i++){
        ans = (ans + dp[n][i])%1000000000;
    }
    cout << ans << "\n";
    return 0;
}