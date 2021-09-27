/*
    BOJ 1371 - 2진수 8진수
    url: https://www.acmicpc.net/problem/1371
    Bronze 2
    date: 2021. 9. 27
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string str;
    int cnt = 1, dec = 0;
    cin >> str;

    while(str.length()%3 !=0)
        str = '0' + str;

    for(int i=0;i<str.length();i+=3){
        int ans;
        ans = (str[i]-'0')*4 + (str[i+1]-'0')*2 + (str[i+2]-'0');
        cout << ans;
    }
    cout << "\n";

    return 0;
}