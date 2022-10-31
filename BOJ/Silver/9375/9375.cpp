/*
    BOJ 9375 - 패션왕 신혜빈
    url: https://www.acmicpc.net/problem/9375
    Silver 3
    date: 2022. 3. 29
*/

#include <iostream>
#include <map>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int T;

    cin >> T;

    while(T--){
        int n, ans = 1;
        cin >> n;

        map<string, int> m;
        for(int i=0;i<n;i++){
            string name, tag;

            cin >> name >> tag;
            if(m.find(tag) == m.end()){
                m.insert({tag, 1});
            }
            else
                m[tag]++;
        }

        for(auto i : m)
            ans *= i.second+1;

        ans -= 1;

        cout << ans << endl;
    }
    return 0;
}