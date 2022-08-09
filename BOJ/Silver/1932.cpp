/*
    BOJ 1932 - 정수 삼각형
    url: https://www.acmicpc.net/problem/1932
    Silver 1
    date: 2022. 8. 9
*/

#include <iostream>

#define endl "\n"

using namespace std;

int dp[500][500], triangle[500][500];
int n, ans;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0; j<i+1;j++){
            cin >> triangle[i][j];
        }
    }
    
    dp[0][0] = triangle[0][0];

    for(int i=1;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(j == 0){
                dp[i][j] = dp[i-1][j] + triangle[i][j];
            }
            else if(j == i){
                dp[i][j] = dp[i-1][j-1] + triangle[i][j];
            }
            else{
                dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + triangle[i][j];
            }
        }
    }
    
    for(int i=0;i<n;i++){
        ans = max(ans, dp[n-1][i]);
    }

    cout << ans;
    
        
    return 0;
}