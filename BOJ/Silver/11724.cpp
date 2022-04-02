/*
    BOJ 11724 - 연결 요수의 개수
    url: https://www.acmicpc.net/problem/11724
    Silver 2
    date: 2022. 4. 2
*/

#include <iostream>
#include <vector>
#define endl "\n"

using namespace std;
vector<int> v[1001];
bool visited[1001];
int N, M, cnt;

void dfs(int x){

    visited[x] = true;

    for(int i=0;i<v[x].size();i++){
        int y = v[x][i];
        if(!visited[y])
            dfs(y);
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N >> M;

    for(int i=0;i<M;i++){
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    for(int i=1;i<=N;i++){
        if(!visited[i]){
            cnt++;
            dfs(i);
        }
    }

    cout << cnt << endl;
    return 0;
}

