/*
    BOJ 17239 - 비밀번호 찾기
    url: https://www.acmicpc.net/problem/17239
    Silver 4 
    date: 2022.3.16
*/

#include <iostream>
#include <map>

#define endl "\n"

using namespace std;
map<string, string> m;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N, M;

    cin >> N >> M;

    for(int i=0;i<N;i++){
        string site, pw;
        cin >> site >> pw;
        m.insert({site, pw});
    }

    for(int i=0;i<M;i++){
        string site;
        cin >> site;
        auto it = m.find(site);
        cout << it->second << endl;
    }
    return 0;
}