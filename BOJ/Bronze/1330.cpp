/*
    BOJ 1330 - 두 수 비교하기
    url: https://www.acmicpc.net/problem/1330
    Bronze 4
    date: 2021. 9. 26
*/

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int a, b;

    cin >> a >> b;

    if(a > b)
        cout << ">";
    else if(a < b)
        cout << "<";
    else
        cout << "==";
    return 0;
}