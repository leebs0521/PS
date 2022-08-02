/*
    BOJ 3053 - 택시 기하학
    url: https://www.acmicpc.net/problem/3053
    Bronze 3
    date: 2022. 8. 2
*/

#include <iostream>
#include <cmath>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    double r;
    double pi = M_PI;
    cin >> r;

    cout << fixed;
    cout.precision(6);
    cout << r*r*pi << endl;
    cout << 2*r*r;
    return 0;
}