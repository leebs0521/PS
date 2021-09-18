/*
    BOJ 10799 - 쇠막대기
    url: https://www.acmicpc.net/problem/10799
    Silver 3
    date: 2021.9.18
*/

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int len, total = 0;

    string str;
    stack<char> s;
    
    cin >> str;

    len = str.length();

    for(int i=0;i<len;i++){
        if(str[i] == '('){
            s.push(str[i]);
        }
        else if(str[i] == ')' && str[i-1] == '('){
            s.pop();
            total += s.size();
        }
        else{
            s.pop();
            total++;
        }
    }
    cout << total << "\n";
    return 0;
}