/*
    BOJ 2475 - 검증수
    url: https://www.acmicpc.net/problem/2475
    Bronze 5
    date: 2021. 9. 26
*/

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n = 5, sum = 0;

    while(n--){
        int input;
        cin >> input;
        sum += input * input;
    }

    cout << sum%10;
    return 0;
}