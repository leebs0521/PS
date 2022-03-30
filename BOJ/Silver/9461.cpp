/*
    BOJ 9461 - 파도반 수열
    url: https://www.acmicpc.net/problem/9461
    Silver 3
    date: 2022. 3. 30
*/

#include <iostream>

#define endl "\n"

using namespace std;
long long dp[101];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int T;

    cin >> T;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;

    for(int i=4; i<=100;i++)
        dp[i] = dp[i-2] + dp[i-3];
    while(T--){
        int n;
        cin >> n;

        cout << dp[n] << endl;
    }
    return 0;
}

