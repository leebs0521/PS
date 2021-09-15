/*
    BOJ 1789 - 수들의 합
    url: https://www.acmicpc.net/problem/1789
    Silver 5
*/

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    long long n, cnt= 0, i = 1;
    cin >> n;
    // n - (1~k) < 0 일 떄까지 반복
    while(n>=i){
        cnt++;
        n -= i++;
    }

    cout << cnt << endl;
    return 0;
}