/*
    BOJ 1436 - 영화감독 숌
    url: https://www.acmicpc.net/problem/1436
    Silver 5
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, i = 665, cnt= 0;
    string s;

    cin >> n;
    
    while(++i)
    {   // 문자열로 변환
        s = to_string(i);
        
        // find함수로 666 포함여부 확인
        if(s.find("666") != -1)
            cnt++;

        if(n == cnt)
            break;    
    }

    cout << i << endl;

    return 0;
}