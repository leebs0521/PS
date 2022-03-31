/*
    BOJ 1931 - 회의실 배정
    url: https://www.acmicpc.net/problem/1931
    Silver 2
    date: 2022. 4. 1
*/

#include <iostream>
#include <algorithm>
#include <vector>
#define endl "\n"

using namespace std;
bool compare(const pair<int, int>&a, const pair<int, int>&b){
    if(a.second == b.second)
        return a.first < b.first;
    else
        return a.second < b.second;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    vector<pair<int, int>> v;
    int N, cnt = 0, now = 0;

    cin >> N;

    for(int i=0; i<N; i++){
        int start, end;
        cin >> start >>  end;
        v.push_back({start, end});
    }
    sort(v.begin(), v.end(), compare);

    for(auto it: v){
        if(now <= it.first){
            cnt++;
            now = it.second;
        }
    }
    cout << cnt << endl;
    return 0;
}