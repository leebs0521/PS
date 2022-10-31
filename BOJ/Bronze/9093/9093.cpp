/*
    BOJ 9093 - 단어 뒤집기
    url: https://www.acmicpc.net/problem/9093
    Bronze 1
*/

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, i;
    string input;
    stack<char> s;

    cin >> n;
    cin.ignore();
    while(n--){
        char item;

        // 한줄 통으로 읽어옴
        getline(cin, input);

        for(i=0;i<input.length();i++){

            // ' ' 만나기 전까지 스택에 push 
            if(input[i]!=' ')
                s.push(input[i]);

            // ' ' 만나면 스택에 있는 값 pop
            else {
                while(!s.empty()){
                    item = s.top();
                    s.pop();
                    cout << item;
                }
                cout << ' ';    
            }
        }
        // 마지막 ' ' ~ 문자열 끝 사이의 문자 pop
        while(!s.empty()){
            item = s.top();
            s.pop();
            cout << item;
        }
        cout << endl;   
    }    
    return 0;
}