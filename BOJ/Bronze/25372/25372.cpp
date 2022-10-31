/*
    BOJ 25372 - 성택이의 은밀한 비밀번호
    url: https://www.acmicpc.net/problem/25372
    Bronze 5
    date: 2022. 8. 18
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, len;
    string str;
    cin >> t;

    while(t--){
        cin >> str;

        len = str.length();

        if(len >= 6 && len <= 9){
            cout << "yes";
        }
        else
            cout << "no";

        cout << endl;
    }
    return 0;
}