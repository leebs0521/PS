/*
    BOJ 9251 - LCS
    url: https://www.acmicpc.net/problem/9251
    Gold 5
    date: 2022. 8. 25
*/

#include <iostream>

#define endl "\n"

using namespace std;

int dp[1001][1001];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string a, b;
    int len_a, len_b;

    cin >> a >> b;

    len_a = a.length();
    len_b = b.length();

    for(int i=1;i<=len_a;i++){
        for(int j=1;j<=len_b;j++){
            if(a[i-1]==b[j-1]){
                dp[i][j] = dp[i-1][j-1]+1;
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    cout << dp[len_a][len_b];
    return 0;
}