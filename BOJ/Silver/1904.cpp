/*
    BOJ 1904 - 01타일
    url: https://www.acmicpc.net/problem/1904
    Silver 3
    date: 2022. 8. 8
*/

#include <iostream>

#define endl "\n"

using namespace std;

unsigned long long dp[1000000];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    
    cin >> n;

    dp[0] = 1;
    dp[1] = 2;

    for(int i=2;i<1000000;i++){
        dp[i] = dp[i-2]%15746 + dp[i-1]%15746;
        dp[i] %= 15746;
    }

    cout << dp[n-1];
    return 0;
}