/*
    BOJ 2501 - 약수 구하기
    url: https://www.acmicpc.net/problem/2501
    Bronze 3
    date: 2022. 8. 12
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, k, cnt = 0, ans;

    cin >> n >> k;

    for(int i=1;i<=n;i++){
        if(n%i == 0){
            cnt++;
            if(cnt == k){
                ans = i;
                break;
            }
        }
    }

    if(cnt == k)
        cout << ans;
    else
        cout << 0;
    return 0;
}