/*
    BOJ 24416 - 알고리즘 수업 - 피보나치 수 1
    url: https://www.acmicpc.net/problem/24416
    Bronze 1
    date: 2022. 8. 7
*/

#include <iostream>

#define endl "\n"

int n, recur[41];

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    recur[1] = recur[2] = 1;

    for(int i=3; i<=n;i++){
        recur[i] = recur[i-1] + recur[i-2];
    }    

    cout << recur[n] << " " << n-2;

    return 0;
}