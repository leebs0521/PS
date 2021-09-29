/*
    BOJ 1259 - 팰린드롬 수
    url: https://www.acmicpc.net/problem/1259
    Bronze 1
    date: 2021. 9. 29
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    while(1){
        string str, rev;
        cin >> str;
        rev = str;
        if(str.length() == 1 && str[0] == '0')
            break;
        
        reverse(rev.begin(),rev.end());

        if(str == rev && rev[0] != '0')
            cout << "yes\n";
        else
            cout << "no\n";
    }    
    return 0;
}