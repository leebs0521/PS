/*
    BOJ 14002 - 가장 긴 증가하는 부분 수열4
    url: https://www.acmicpc.net/problem/14002
    Gold 4 
    date: 2021. 9. 29
*/

#include <iostream>
#include <vector>

using namespace std;

int dp[1001], arr[1001];
vector<int> v[1001];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    vector<int> ans;
    
    cin >> n;

    for(int i=1;i<=n;i++)   cin >> arr[i];

    for(int i=1;i<=n;i++){
        // i 번쨰 부터 시작하는 수열
        dp[i] = 1;
        v[i].push_back(arr[i]);

        // j = 1 ~ i-1 까지 기존 수열 검사
        for(int j=1;j<i;j++){

            // arr[i] > arr[j] 이면
            if(arr[i] > arr[j]){

                // j부터 시작한 수열이 i보다 작으면
                // i번째 수열 삭제후 j로 바꿔주고 i 넣어줌
                if(dp[i] < dp[j]+1){
                    v[i].clear();
                    v[i] = v[j];
                    v[i].push_back(arr[i]);
                    dp[i] = dp[j]+1;
                }
            }
                
        }
        // i까지 구한 수열이 기존 최장 길이 수열보다 크면 교체
        if(ans.size() < v[i].size())
            ans = v[i];
    }

    cout << ans.size() << "\n";
    for(int i=0;i<ans.size();i++)
        cout << ans[i] << " ";
    return 0;
}