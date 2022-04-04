/*
    BOJ 1697 - 숨바꼭질
    url: https://www.acmicpc.net/problem/1697
    Silver 1 
    date: 2022. 4. 22
*/

#include <iostream>
#include <queue>
#define endl "\n"

using namespace std;

bool visited[100001];

bool valid(int n) {
   if (n < 0 || n > 100000 || visited[n])
      return false;
   return true;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, k;
    queue<pair<int, int>> q;
    cin >> n >> k;

    q.push({n, 0});
    visited[n] = true;
    while(!q.empty()){
        int now = q.front().first;
        int cnt = q.front().second;
        q.pop();
        if(now == k){
            cout << cnt << endl;
            break;
        }
        if(valid(now-1)){
            q.push({now-1, cnt+1});
            visited[now-1] = true;
        }
        if(valid(now+1)){
            q.push({now+1, cnt+1});
            visited[now+1] = true;
        }
        if(valid(now*2)){
            q.push({now*2, cnt+1});
            visited[now*2] = true;
        }
    }
    return 0;
}