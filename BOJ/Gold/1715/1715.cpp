/*
    BOJ 1715 - 카드 정렬하기
    url: https://www.acmicpc.net/problem/1715
    Gold 4
    date: 2022. 11. 15
*/

#include <iostream>
#include <queue>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    priority_queue<int, vector<int>, greater<int>> q;

    int n, ans = 0;

    cin >> n;

    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        q.push(a);
    }

    if(n == 1){
        cout << 0;
    }
    else{
        while(q.size()>1){
            int a = q.top();
            q.pop();
            int b = q.top();
            q.pop();
            ans += a + b;
            q.push(a+b);
        }

        cout << ans;
    }
    return 0;
}