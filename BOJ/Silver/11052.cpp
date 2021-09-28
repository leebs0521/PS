/*
    BOJ 11052 - 카드 구매하기
    url: https://www.acmicpc.net/problem/11052
    Silver 1 
    date: 2021. 9. 28
*/

#include <iostream>

using namespace std;

int dp[1001], arr[1001];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;

    cin >> n;

    for(int i=1;i<=n;i++)
        cin >> arr[i];

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            dp[i] = max(dp[i], dp[i-j]+arr[j]);
        }
    }    

    cout << dp[n] << "\n";
    return 0;
}