/*
    BOJ 2588 - 곱셈
    url: https://www.acmicpc.net/problem/2588
    Bronze 3 
    date: 2022. 6. 24
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int x, y;

    cin >> x >> y;

    cout << x * (y%10) << endl;
    cout << x * ((y/10)%10) << endl;
    cout << x * (y/100) << endl;
    cout << x * y << endl;
    
    return 0;
}