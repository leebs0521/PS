/*
    BOJ 1254 - 펠린드롬 만들기
    url: https://www.acmicpc.net/problem/1254
    Silver 2
    date: 2022. 6. 28
*/

#include <iostream>

#define endl "\n"

using namespace std;
string str;

bool isPalindrome(int n){
    int half = (str.size() - n) / 2;
    bool corrent = true;

    for(int i=0; i<half;i++){
        if(str[n+i] != str[str.size()-1-i]) 
            return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> str;

    for(int i=0;i<str.size();i++){
        if(isPalindrome(i)){
            cout << str.size()+i;
            break;
        }
    }
    return 0;
}