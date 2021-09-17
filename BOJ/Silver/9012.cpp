/*
    BOJ 9012 - 괄호
    url: https://www.acmicpc.net/problem/9012
    Silver 4
*/

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, i;
    string str;
    stack<char> s;
    cin >> n;

    while(n--){
        // 한줄씩 입력
        cin >> str;
        for(i=0;i<str.length();i++){
            // '(' 만나면 stack push
            if(str[i] == '(')
                s.push('(');

            // ')' 만나면 pop 그러나 비어있으면 NO
            else{
                if(s.empty()){
                    cout << "NO" << endl;
                    break;
                }
                else{
                    s.pop();
                }
            }
            // 문자열 끝일시 스택에 남아있으면 NO 비어있으면 YES
            if(i == str.length()-1){
                if(s.empty())
                   cout << "YES" << endl;
                else{
                    cout << "NO" << endl;
                }        
            }
        }
        // 스택 비워주기
        while(!s.empty())
            s.pop();
    }
    return 0;
}