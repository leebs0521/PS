/*
    BOJ 10733 - 제로
    url: https://www.acmicpc.net/problem/10733
    Silver 4
    date: 2021.9.21
*/

#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int k, sum = 0;
    stack<int> s;
    cin >> k;

    while(k--){
        int input;

        cin >> input;

        if(input == 0)
            s.pop();
            
        else
            s.push(input);   
    }

    while(!s.empty()){
        sum += s.top();
        s.pop();
    }

    cout << sum << "\n";

    
    return 0;
}