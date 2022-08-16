/*
    BOJ 12865 - 평범한 배낭
    url: https://www.acmicpc.net/problem/12865
    Gold 5
    date: 2022. 8. 16
*/

#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"

using namespace std;

int n, k;
int dp[101][100001], w[101], v[101];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n >> k;

	for (int i = 1; i <= n; i++)
		cin >> w[i] >> v[i];

	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= k; j++){
			 if (j - w[i] >= 0) 
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
			 else 
                dp[i][j] = dp[i - 1][j];
		}
	}

	cout << dp[n][k];
    return 0;
}