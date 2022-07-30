/*
    BOJ 1712 - 손익분기점
    url: https://www.acmicpc.net/problem/1712
    Bronze 2
    date: 2022. 7. 30
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int x, y, z;

    cin >> x >> y >> z;

    // 생산비용이 판매 비용 보다 높은 경우 수익이 안나므로 -1
    if(y - z >= 0){
        cout << -1;
    }
    else{
        int profit = z - y;
        int days = x / profit;

        cout << days + 1;
    }
    return 0;
}