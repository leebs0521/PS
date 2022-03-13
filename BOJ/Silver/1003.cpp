/*
    BOJ 1003 - 피보나치 함수
    url: https://www.acmicpc.net/problem/1003
    Silver 3
    date: 2022.3.11
*/

#include <iostream>

#define endl "\n"

using namespace std;
long long callOne[41];
long long callZero[41];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N;

    cin >> N;
    
    callZero[0] = 1;
    callZero[1] = 0;
    callOne[0] = 0;
    callOne[1] = 1;

    for(int i=2; i<41;i++){
        callZero[i] = callZero[i-1] + callZero[i-2];
        callOne[i] = callOne[i-1] + callOne[i-2];
    }
    while(N--){
        int n;
        cin >> n;
        cout << callZero[n] << " " << callOne[n] << endl;
    }

    return 0;
}