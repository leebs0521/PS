/*
    BOJ 1476 - 날짜 계산
    url: https://www.acmicpc.net/problem/1476
    Silver 5
*/

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int E, S, M, year = 1;
    int En = 1, Sn = 1, Mn =1;

    cin >> E >> S >> M;

    while(1){
        if(E == En && S == Sn && M == Mn)
            break;
            
        year++;
        if(++En > 15)
            En = 1;
        if(++Sn > 28)
            Sn = 1;
        if(++Mn > 19)
            Mn = 1;        
    }
    cout << year << endl;
    return 0;
}