/*
    BOJ 2739 - 구구단
    url: https://www.acmicpc.net/problem/2739
    Bronze 3
    date: 2021. 9. 24
*/

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;

    cin >> n;

    for(int i=1;i<=9;i++){
        cout << n << " * " << i << " = " << n*i << "\n";
    }
    return 0;
}