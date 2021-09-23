/*
    BOJ 1157 - 단어 공부
    url: https://www.acmicpc.net/problem/1157
    Bronze 1
    date: 2021. 9. 23
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int len, max, alphaCount[26] ={0,};
    bool dup = false;
    char ans;
    string input;

    cin >> input;

    len = input.length();

    // 'a' ~ 'z' 'A' ~ 'Z' 카운팅
    for(int i=0;i<len;i++){
        if(input[i] >= 'a'){
            alphaCount[input[i] - 'a']++;
        }
        else{
            alphaCount[input[i]-'A']++;
        }
    }

    max = 0;
    // 제일 많이 사용된 알파벳 찾기
    for(int i=1;i<26;i++){
        if(alphaCount[i] > alphaCount[max]){
            max = i;
            dup = false;
        }
        // 같은 사용횟수인 알파벳이 존재하면 중복체크
        else if(alphaCount[i] == alphaCount[max]){
            dup = true;
        }
    }

    if(dup)
        cout << "?\n";
    else{
        ans = 'A' + max;
        cout << ans << "\n";
    }
    return 0;
}