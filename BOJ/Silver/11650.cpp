/*
    BOJ 11650 - 좌표 정렬하기
    url: https://www.acmicpc.net/problem/11650
    Silver 5
    date: 2021. 9. 29
*/

#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"

using namespace std;

bool compare(pair<int, int>a, pair<int, int>b){
    if(a.first==b.first)
        return a.second < b.second;
    else
        return a.first < b.first;
}
vector<pair<int, int>> v;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;

    cin >> n;

    for(int i=0;i<n;i++){
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }

    sort(v.begin(),v.end(),compare);

    for(int i=0;i<n;i++)
        cout << v[i].first << " " << v[i].second << endl;
    return 0;
}