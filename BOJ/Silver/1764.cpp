/*
    BOJ 1764 - 듣보잡
    url: https://www.acmicpc.net/problem/1764
    Silver 4
    date: 2022. 3. 15
*/

#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N, M, cnt = 0;
    vector<string> ns, nsns;

    cin >> N >> M;

    for(int i=0;i<N;i++){
        string str;
        cin >> str;
        ns.push_back(str);
    }
    sort(ns.begin(),ns.end());

    for(int i=0;i<M;i++){
        string str;
        cin >> str;
        if(binary_search(ns.begin(),ns.end(), str)){
            cnt++;
            nsns.push_back(str);
        }
    }
    sort(nsns.begin(),nsns.end());
    cout << cnt << endl;
    for(auto it : nsns)
        cout << it << endl;
    return 0;
}

