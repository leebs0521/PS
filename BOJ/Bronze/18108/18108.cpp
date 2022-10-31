/*
    BOJ 18108 - 1998년생인 내가 태국에서는 2541년생?!
    url: https://www.acmicpc.net/problem/18108
    Bronze 5
    date: 2022. 4. 9
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, diff = 2541 - 1998;
    cin >> n;

    cout << n - diff << endl;
    return 0;
}