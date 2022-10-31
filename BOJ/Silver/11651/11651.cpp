/*
    BOJ 11651 - 좌표 정렬하기 2
    url: https://www.acmicpc.net/problem/11651
    Silver 5 
    date: 2021. 10. 6
*/

#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"

using namespace std;

pair<int,int> p[100001];

bool compare(pair<int,int> a, pair<int,int> b){

    if(a.second == b.second)
        return a.first < b.first;

    return a.second < b.second;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;

    cin >> n;

    for(int i=0;i<n;i++){
        int x, y;

        cin >> x >> y;
        p[i].first = x;
        p[i].second = y;
    }

    stable_sort(p,p+n, compare);      

    for(int i=0;i<n;i++)
        cout << p[i].first << " " << p[i].second << endl;  
    return 0;
}