/*
    BOJ 1699 - 제곱수의 합
    url: https://www.acmicpc.net/problem/1699
    Silver 3
    date: 2021. 9. 29
*/

#include <iostream>
#include <cmath>

using namespace std;

int dp[100001];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;

    cin >> n;

    for(int i=1;i<=n;i++){
        // i는 1+1+...1 
        dp[i] = i;
        for(int j=1;j*j<=i;j++){

            // i = j*j 인 경우 9 = 3^2 이므로 1
            // 
            dp[i] = min(dp[i], dp[i-j*j]+1);
        }
    }

    cout << dp[n];
    return 0;
}