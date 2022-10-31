/*
    BOJ 1935 - 후위 표기식2
    url: https://www.acmicpc.net/problem/1935
    Silver 3
    date: 2021.9.19
*/

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int alpha[26];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    string exp;
    stack<double> s;

    cin >> n >> exp;
    
    // n개 변수에 대한 값 배열에 저장 alpha[0] = 'A' ~
    for(int i = 0; i<n;i++)
        cin >> alpha[i];
    
    for(int i=0; i<exp.length();i++){

        // 변수가 들어올 시 stack push
        if(exp[i] >= 'A' && exp[i] <= 'Z')
            s.push(alpha[exp[i]-'A']);

        // [+ - / *] 들어올 시 op1, op2 stack에서 pop 후
        // 연산에 따라 연산 후 결과를 스택에 push  
        else{
            double op1, op2;
            op2 = s.top();
            s.pop();
            op1 = s.top();
            s.pop();
            if(exp[i] == '+')
                s.push(op1+op2);
            else if(exp[i] == '-')
                s.push(op1-op2);
            else if(exp[i] == '/')
                s.push(op1/op2);
            else if(exp[i] == '*')
                s.push(op1*op2);    
        }
        // 스택에 식의 결과 값만 남게 됨
    }
    cout << fixed;
    cout.precision(2);
    cout << s.top() << "\n";
    return 0;
}