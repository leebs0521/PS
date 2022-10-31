/*
    BOJ 10869 - 사칙 연산
    url: https://www.acmicpc.net/problem/10869
    Bronze 5
    date: 2021. 9. 26
*/

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int a, b;

    cin >> a >> b;

    cout << a+b << "\n";
    cout << a-b << "\n";
    cout << a*b << "\n";
    cout << a/b << "\n";
    cout << a%b << "\n";
    return 0;
}