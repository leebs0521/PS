/*
    BOJ 1085 - 직사각형에서 탈출
    url: https://www.acmicpc.net/problem/1085
    Bronze 3
    date: 2021. 9. 29
*/

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int x,y,w,h, row, col;

    cin >> x >> y >> w >> h;

    row = min(x, abs(w-x));
    col = min(y, abs(h-y));

    cout << min(row, col);

    return 0;
}