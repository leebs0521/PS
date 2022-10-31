/*
    BOJ 2565 - 전깃줄
    url: https://www.acmicpc.net/problem/2565
    Gold 5
    date: 2022. 8. 22
*/

#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"

using namespace std;

int dp[102];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, left, right, ans = 0;

    cin >> n;

    vector<pair<int ,int>> v;
    v.push_back({0, 0});

    for(int i=0;i<n;i++){
        cin >> left >> right;
        v.push_back({left, right});
    }

    sort(v.begin(), v.end());

    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            if(v[i].second > v[j].second){
                if(dp[j] >= dp[i]){
                    dp[i] = dp[j] + 1;
                }
            }
        }
        ans = max(ans, dp[i]);
    }

    cout << n - ans;

    return 0;
}