/*
    BOJ 4673 - 셀프 넘버
    url: https://www.acmicpc.net/problem/4673
    Silver 5
    date: 2022. 7. 30
*/

#include <iostream>
#include <string>
#include <cstdlib>
#define endl "\n"

using namespace std;

int SelfNum(int n){

    int next_val = n;
    string str = to_string(n);

    for(int i=0;i<str.length();i++){
        next_val += (int)(str[i]-'0');
    }

    return next_val;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    bool check[10001]{false, };

    for(int i=1;i<10001;i++){
        int n = SelfNum(i);
        if(n < 10001){
            check[n] = true;
        }
    }

    for(int i=1;i<10001;i++){
        if(!check[i])
            cout << i << endl;
    }
    return 0;
}