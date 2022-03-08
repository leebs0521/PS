/*
    BOJ 2869 - 달팽이는 올라가고 싶다
    url: https://www.acmicpc.net/problem/2869
    Bronze 1 
    date: 2022.3.8
*/

#include <iostream>
#include "cmath"
#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int A, B, V, temp = 0, cnt = 1;

    cin >> A >> B >> V;
    temp = V - A;

    if(temp%(A-B) !=0){
        cnt += temp / (A-B) + 1;
    }
    else
        cnt += temp / (A-B);

    cout << cnt << endl;
    return 0;
}