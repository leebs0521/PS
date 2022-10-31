/*
    BOJ 11726 - 2 x N 타일링
    url: https://www.acmicpc.net/problem/11726
    Silver 3
    date: 2021, 9, 28
*/

#include <iostream>

using namespace std;

int dp[1001];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;

    cin >> n;

    dp[1] = 1;
    dp[2] = 2;
    /*
        dp[n] = if. ㅁㅁ(1x2)
                    ㅁㅁ(1x2)   --> dp[n-2]
                if. ㅁ
                    ㅁ(2x1)     --> dp[n-1]
                ==> dp[n] = dp[n-2] + dp[n-1];
    */
    for(int i=3;i<=n;i++)
        dp[i] = (dp[i-1] + dp[i-2])%10007;

    cout << dp[n] << "\n";
    return 0;
}