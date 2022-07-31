/*
    BOJ 10870 - 피보나치 수 5
    url: https://www.acmicpc.net/problem/10870
    Bronze 5
    date: 2022. 7. 31
*/

#include <iostream>

#define endl "\n"

using namespace std;

int fib(int n){
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;

    cin >> n;

    cout << fib(n);
    return 0;
}