/*
    BOJ 2292 - 벌집
    url: https://www.acmicpc.net/problem/2292
    [Tier] 
    date: 
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, max = 1, cnt = 1, add = 6;

    cin >> n;

    while(max < n){
        max += add * cnt;
        cnt++;
    }

    cout << cnt;
    return 0;
}