/*
    BOJ 14681 - 사분면 고르기
    url: https://www.acmicpc.net/problem/14681
    Tier: Bronze
    date: 2022. 7. 29
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int x, y;

    cin >> x >> y;

    if(x > 0 && y > 0)
        cout << "1" << endl;
    else if( x < 0 && y > 0)
        cout << "2" << endl;
    else if( x < 0 && y < 0)
        cout << "3" << endl;
    else
        cout << "4" << endl;

    return 0;
}