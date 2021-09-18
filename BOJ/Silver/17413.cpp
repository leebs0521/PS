/*
    BOJ 17413 - 단어 뒤집기 2
    url: https://www.acmicpc.net/problem/17413
    Silver 3
    date: 2021.9.18
*/

#include <iostream>
#include <stack>

#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string str;
    int len;
    bool tag = false;
    stack<char> s;

    getline(cin,str);
    len = str.length();

    // stack 사용
    for(int i = 0; i<len; i++){
        // 기존 '<' 들어와있으면 그냥 출력 
        if(tag){
            cout << str[i];
            // '>' 태그 끝이면 false 로 변환
            if(str[i] == '>')
                tag = false;
        }
        // <> 안의 아니면
        else{
            // 새로운 태그 시작이면 true
            if(str[i] == '<'){
                // 기존에 담긴 문자열이 있으면 모두 pop
                // ex asdas<safasd>
                while(!s.empty()){
                    cout << s.top();
                    s.pop();
                }
                cout << str[i];
                tag = true;
            }
            // ' '만나면 담긴 문자열 모두 pop
            else if(str[i] == ' '){
                while(!s.empty()){
                    cout << s.top();
                    s.pop();
                }
                cout << ' ';
            }
            // 스택에 push
            else{
                s.push(str[i]);
            }
        }
    }
    // 스택에 남은 문자열 모두 pop
    while(!s.empty()){
        cout << s.top();
        s.pop();
    }
    
    cout <<"\n";
}