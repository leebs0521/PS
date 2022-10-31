/*
    BOJ 1107 - 리모컨
    url: https://www.acmicpc.net/problem/1107
    Gold 5 
    date: 2021. 10. 1
*/

#include <iostream>
#include <cstring>
#include <string>
#define endl "\n"

using namespace std;

bool button[10];

// a에 못쓰는 번호가 있는지 체크
bool check(int a){
    string str = to_string(a);
    for(int i=0;i<str.length();i++){
        if(!button[str[i]-'0'])
            return false;
    }
    return true;
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, N, minimum;
    memset(button,true,sizeof(button));

    cin >> n >> N;

    for(int i=0;i<N;i++){
        int input;
        cin >> input;
        button[input] = false;
    }

    if(n == 100){
        cout << 0 << endl;
        return 0;
    }

    // 초기 최소값은 100에서 +-로 움직이는 횟수
    minimum = abs(n-100);

    // 0~1000000 
    for(int i=0;i<1000001;i++){

        // i번째 숫자를 리모콘 버튼입력으로 갈수있으면
        if(check(i)){
            // i에서 n까지 +- 횟수 + 버튼 입력길이
            int temp = abs(n-i) + to_string(i).length();
            minimum = min(minimum, temp);
        }
    }

    cout << minimum << endl;
    return 0;
}