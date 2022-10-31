/*
    BOJ 1152 - 단어의 개수
    url: https://www.acmicpc.net/problem/1152
    Bronze 2
    date: 2021. 9. 23
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int len, cnt = 1;
    string input;

    getline(cin, input);

    len = input.length();
    // 아무것도 안들어올 경우 0
    if(len == 0){
        cout << 0 << "\n";
        return 0;
    }

    // ' ' 카운팅
    for(int i=0; i<len;i++){
        if(input[i] == ' ')
            cnt++;
    }
    
    // 문자열 첫자리나 맨 끝에 ' '인 경우 하나씩 뺴줌
    if(input[0] == ' ') cnt--;
    if(input[len-1] == ' ')cnt--;

    cout << cnt << "\n";   
    return 0;
}