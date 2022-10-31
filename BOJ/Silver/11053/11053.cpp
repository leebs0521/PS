/*
    BOJ 11053 - 가장 긴 증가하는 부분 수열
    url: https://www.acmicpc.net/problem/11053
    Silver 2
    date: 2021. 9. 28
*/

#include <iostream>

using namespace std;


int arr[1001], dp[1001];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, big = -1;

    cin >> n;

    for(int i=1;i<=n;i++)
        cin >> arr[i];

    for(int i=1;i<=n;i++){
        dp[i] = 1;
        for(int j=1; j<i;j++){
            if(arr[i] > arr[j])
                dp[i] = max(dp[i], dp[j]+1);
        }

        big = max(dp[i], big);
    }
    cout << big;
    return 0;
}