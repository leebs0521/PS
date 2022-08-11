/*
    BOJ 11054 - 가장 긴 바이토닉 부분 수열
    url: https://www.acmicpc.net/problem/11054
    Gold 4
    date: 2022. 8. 11
*/

#include <iostream>

#define endl "\n"

using namespace std;

int n;
int arr[1000], l_dp[1000], r_dp[1000];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i=0;i<n;i++)    cin >> arr[i];
    
    for(int i=0;i<n;i++){
        l_dp[i] = 1;
        for(int j=0;j<i;j++){
            if(arr[j] < arr[i] && l_dp[i] < l_dp[j]+1){
                l_dp[i] = l_dp[j]+1;
            }
        }
    }
    for(int i=n-1;i>=0;i--){
        r_dp[i] = 1;
        for(int j=n-1;j>=i;j--){
            if(arr[j] < arr[i] && r_dp[i] < r_dp[j]+1){
                r_dp[i] = r_dp[j]+1;
            }
        }
    }

    int ans = 0;

    for(int i=0;i<n;i++){
        ans = max(ans, l_dp[i]+r_dp[i]-1);
    }

    cout << ans;
    return 0;
}