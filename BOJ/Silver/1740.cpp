/*
    BOJ 1740 - 거듭제곱
    url: https://www.acmicpc.net/problem/1740
    Silver 5
*/

#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    long long n, add = 1, ans = 0;
    int i;
    queue<bool> q;

    cin >> n;
    while(n>0){
        q.push(n%2);
        n /= 2;
    }
    
    while(!q.empty()){
        ans += q.front() *add;
        add *= 3;
        q.pop();
    }
    cout << ans << endl;
    return 0;
}