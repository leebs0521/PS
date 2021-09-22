/*
    BOJ 1676 - 팩토리얼 0의 개수
    url: https://www.acmicpc.net/problem/1676
    Silver 4
    date: 2021.9.22
*/

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;

    cin >> n;

    // 10 = 2 x 5 이므로
    // N! = 2의 i승 x 5의 j승 꼴 -> min(i,j)가 0의 개수
    // 당연히 j가 적으므로 5개의 개수가 답
     
    cout << n/5 + n/25 + n/125 << "\n";    
    return 0;
}