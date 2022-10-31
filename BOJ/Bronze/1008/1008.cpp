/*
    BOJ 1008 - A/B
    url: https://www.acmicpc.net/problem/1008
    Bronze 4
    date: 2021. 9. 26
*/

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    double a, b;

    cin >> a >> b;

    cout.fixed;
    cout.precision(12);

    cout << a/b << "\n";
    return 0;
}