/*
    BOJ 14425 - 문자열 집합
    url: https://www.acmicpc.net/problem/14425
    Silver 3
    date: 2022. 8. 1
*/

#include <iostream>
#include <set>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    set<string> s;

    int n, m, cnt = 0;
    string str;
    cin >> n >> m;

    for(int i=0;i<n;i++){
        cin >> str;
        s.insert(str);
    }  
    for(int i=0;i<m;i++){
        cin >> str;
        if(s.find(str) != s.end())
            cnt++;
    }
    cout << cnt;
    return 0;
}