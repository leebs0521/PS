/*
    BOJ 10430 - 나머지
    url: https://www.acmicpc.net/problem/10430
    Bronze 5
    date: 2021.9.22
*/

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int A, B, C;

    cin >> A >> B >> C;

    cout << (A+B)%C << "\n";
    cout << ((A%C) + (B%C))%C << "\n";
    cout << (A*B)%C << "\n";
    cout << ((A%C)*(B%C))%C << "\n";
    
    return 0;
}