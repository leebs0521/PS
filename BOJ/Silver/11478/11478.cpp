/*
    BOJ 11478 - 서로 다른 부분 문자열의 개수
    url: https://www.acmicpc.net/problem/11478
    Silver 3
    date: 2022. 8. 1
*/

#include <iostream>
#include <set>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string str;
    set<string> s;
    cin >> str;

    for(int i=1;i<=str.length();i++){
        for(int j=0;j<=str.length()-i;j++){
            string sub = str.substr(j, i);
            s.insert(sub);
        }
    }

    cout << s.size();
    return 0;
}