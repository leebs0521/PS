/*
    BOJ 2839 - 설탕 배달
    url: https://www.acmicpc.net/problem/2839
    Bronze 1 
    date: 2021. 10. 6
*/

#include <iostream>

#define endl "\n"

using namespace std;

int dp[5001];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    dp[0] = -1;
    dp[1] = -1;
    dp[2] = -1;
    dp[3] = 1;
    dp[4] = -1;
    dp[5] = 1;

    int n;

    cin >> n;
    for(int i=6;i<=n;i++){
        if(dp[i-3] == -1 && dp[i-5] == -1)
            dp[i] = -1;
        else{
            if(dp[i-3] == -1)
                dp[i] = dp[i-5]+1;
            else{
                if(dp[i-5] != -1)
                    dp[i] = min(dp[i-5]+1, dp[i-3]+1);
                else
                    dp[i] = dp[i-3]+1;
            }      
        }
    }

    cout << dp[n] << endl;
    return 0;
}