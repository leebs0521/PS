/*
    BOJ 1769 - 3의 배수
    url: https://www.acmicpc.net/problem/1769
    Silver 5
*/

#include <iostream>
#include <string>

using namespace std;

// s[0] ~ s[n] 까지 더해서 반환해주는 함수
string func(string s){
    int i, res = 0;

    for(i=0;i<s.length();i++){
        res += s[i] -'0';
    }
    return to_string(res);
}

string s;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int res, cnt = 0;
    cin >> s;

    while(1){
        // s가 10이하 일때까지 계속 더해줌
        if(s.length()==1){
            break;
        }
        else{
            s = func(s);
            cnt++;
        }
    }
    // 상수화
    res = s[0] - '0';

    cout << cnt << endl;
    if(res%3==0)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    return 0;
}