/*
    BOJ 1032 - 명령 프롬프트
    url: https://www.acmicpc.net/problem/1032
    Bronze 1 
    date: 2022. 8. 10
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    string str[50];
    string ans = "";

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> str[i];
    }

    for(int i=0;i<str[0].length();i++){
        char a = str[0][i];
        bool flag = true;
        for(int j=1;j<n;j++){
            if(str[j][i] != a)
                flag = false;
        }
        if(flag)
            ans += a;
        else
            ans += '?';
    }

    cout << ans;
    return 0;
}