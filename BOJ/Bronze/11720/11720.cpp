/*
    BOJ 11720 - 숫자의 합
    url: https://www.acmicpc.net/problem/11720
    Bronze 2
    date: 2021. 9. 23
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, sum = 0;
    string str;

    cin >> n >> str;

    for(int i=0;i<str.length();i++){
        sum += str[i] - '0';
    }

    cout << sum << "\n";
    return 0;
}