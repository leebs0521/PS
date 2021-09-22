/*
    BOJ 10872 - 팩토리얼
    url: https://www.acmicpc.net/problem/10872
    Bronze 3
    date: 2021.9.22
*/

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N, sum = 1;
    cin >> N;

    for(int i=2;i<=N;i++)
        sum *= i;

    cout << sum << "\n";

    return 0;
}