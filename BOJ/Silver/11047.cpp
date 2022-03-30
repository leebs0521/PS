/*
    BOJ 11047 - 동전 0
    url: https://www.acmicpc.net/problem/11047
    Silver 3
    date: 2022. 3. 30
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N, K, ans = 0;
    int coin[10];

    cin >> N >> K;

    for(int i=0;i<N;i++)
        cin >> coin[i];

    for(int i=N-1; i>=0; i--){
        ans += K/coin[i];
        K %= coin[i];
    }

    cout << ans << endl;
    return 0;
}