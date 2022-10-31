/*
    BOJ 1463 - 1로 만들기
    url: https://www.acmicpc.net/problem/1463
    Silver 3
    date: 2021. 9. 28
*/

#include <iostream>

using namespace std;

int dp[1000001];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;

    cin >> n;
    /** 
     *  dp[n] = min(dp[n-1]+1, dp[n/2]+1, dp[n/3]+1) 
    **/
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1]+1;
        if(i%2==0)
            dp[i] = min(dp[i],dp[i/2]+1);
        if(i%3==0)
            dp[i] = min(dp[i],dp[i/3]+1);
    }

    cout << dp[n] << "\n";
    return 0;
}