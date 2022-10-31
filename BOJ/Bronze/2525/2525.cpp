/*
    BOJ 2525 - 오븐 시계
    url: https://www.acmicpc.net/problem/2525
    Tier: Bronze 3
    date: 2022. 7. 29
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int h, m, time;

    cin >> h >> m >> time;

    m += time;

    if(m >= 60){
        h += m/60;
        m = m%60;
        h = h%24;
    }

    cout << h << " " << m;
    return 0;
}