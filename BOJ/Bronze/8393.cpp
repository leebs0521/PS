/*
    BOJ 8393 - 합
    url: https://www.acmicpc.net/problem/8393
    Bronze 5 
    date: 2022. 7. 30
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, sum = 0;

    cin >> n;

    for(int i=1;i<=n;i++){
        sum += i;
    }

    cout << sum;
    return 0;
}