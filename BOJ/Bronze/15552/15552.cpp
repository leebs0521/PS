/*
    BOJ 15552 - 빠른 A + B
    url: https://www.acmicpc.net/problem/15552
    Bronze 4 
    date: 2022. 7. 30
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;

    cin >> n;

    while(n--){
        int x, y;

        cin >> x >> y;

        cout << x + y << endl;
    }
    return 0;
}