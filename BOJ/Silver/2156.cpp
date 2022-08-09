/*
    BOJ 2156 - 포도주 시식
    url: https://www.acmicpc.net/problem/2156
    Silver 1
    date: 2022. 8. 9
*/

#include <iostream>

#define endl "\n"

using namespace std;

int n;
int dp[10001], arr[10001];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }    

    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];

    for(int i=3;i<=n;i++){
        dp[i] = max(dp[i-3] + arr[i-1] + arr[i], max(dp[i-2]+arr[i], dp[i-1]));
    }

    cout << dp[n];
    return 0;
}