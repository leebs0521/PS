/*
    BOJ 1620 - 포켓몬 마스터
    url: https://www.acmicpc.net/problem/1620
    Silver 4
    date: 2022. 3. 14
*/

#include <iostream>
#include <map>
#include <cstdlib>

#define endl "\n"

using namespace std;
string list[100001];
map<string, int> m;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, M;

    cin >> N >> M;

    for(int i=1;i<=N;i++){
        string str;
        cin >> str;
        list[i] = str;
        m.insert({str, i});
    }
    for(int i=0;i<M;i++){
        string str;
        cin >> str;

        if(str[0] >= '0' && str[0] <= '9'){
            int n = stoi(str);
            cout << list[n] << endl;
        }
        else{
            auto it = m.find(str);
            cout << it->second << endl;

        }
    }
    return 0;
}
