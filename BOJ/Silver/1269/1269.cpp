/*
    BOJ 1269 - 대칭 차집합
    url: https://www.acmicpc.net/problem/1269
    Silver 3
    date: 2022. 8. 1
*/

#include <iostream>
#include <set>
#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    set<int> a, b;

    int n, m, num, cnt = 0;

    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> num;
        a.insert(num);
    }
    for(int i=0;i<m;i++){
        cin >> num;
        if(a.find(num) != a.end())
            cnt++;
        b.insert(num);
    }

    cout << n + m - 2*cnt;
    return 0;
}