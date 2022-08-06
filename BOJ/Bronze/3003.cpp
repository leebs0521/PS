/*
    BOJ 3003 - 킹, 퀸, 룩, 비숍, 나이트, 폰
    url: https://www.acmicpc.net/problem/3003
    Bronze 5
    date: 2022. 8. 6
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int chess[] = {1, 1, 2, 2, 2, 8};

    for(int i=0;i<6;i++){
        int n;

        cin >> n;

        cout << chess[i] - n << " ";
    }
    return 0;
}