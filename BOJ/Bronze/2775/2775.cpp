/*
    BOJ 2775 - 부녀회장이 될테야
    url: https://www.acmicpc.net/problem/2775
    Bronze 2
    date: 2021. 10 6
*/

#include <iostream>

#define endl "\n"

using namespace std;

int dp[15][15];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;

    cin >> t;

    for(int i=0;i<15;i++){
        int sum = 0;
        for(int j=1;j<15;j++){
            if(i==0)
                dp[i][j]=j;
            else{
                sum += dp[i-1][j];
                dp[i][j] = sum;
            }
        }
    }
    while(t--){
        int n, k;

        cin >> k >> n;

        cout << dp[k][n] << endl;
    }
    return 0;
}