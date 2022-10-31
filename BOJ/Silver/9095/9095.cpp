/*
    BOJ 9095 - 1, 2, 3 더하기
    url: https://www.acmicpc.net/problem/9095
    Silver 3 
    date: 2021. 9. 28
*/

#include <iostream>

using namespace std;

int dp[12];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;

    cin >> t;

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    /*
        dp[n] --> if dp[n-1] 에 1더하는 경우
                  if dp[n-2] 에 2더하는 경우
                  if dp[n-3] 에 3더하는 경우
        
        => dp[n] = dp[n-1] + dp[n-2] + dp[n-3]
        
    */
    for(int i=4;i<=11;i++)
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    while(t--){
        int n;
        cin >> n;
        cout << dp[n] << "\n";
    }
    return 0;
}