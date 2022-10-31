/*
    BOJ 11050 - 이항 계수 1
    url: https://www.acmicpc.net/problem/11050
    Bronze 1 
    date: 2021. 9. 29
*/

#include <iostream>

#define endl "\n"

using namespace std;

int factorial(int n){
    int res = 1;

    while(n>0){
        res *= n;
        n--;
    }

    return res;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, k, ans;

    cin >> n >> k;

    ans = factorial(n) / (factorial(k) * factorial(n-k));

    cout << ans;
    return 0;
}