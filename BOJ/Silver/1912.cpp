/*
    BOJ 1912 - 연속 합
    url: https://www.acmicpc.net/problem/1912
    Silver 2 
    date: 2021. 9. 29
*/

#include <iostream>
#define MAX 100001
using namespace std;

int arr[MAX], dp[MAX];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, big;

    cin >> n;

    for(int i=1;i<=n;i++) cin >> arr[i];

    dp[1] = arr[1];
    big = dp[1];

    for(int i=2;i<=n;i++){
        dp[i] = max(arr[i], dp[i-1]+arr[i]);
        if(big < dp[i])
            big = dp[i];
    }

    cout << big << "\n";
    
    return 0;
}