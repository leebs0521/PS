/*
    BOJ 1260 - DFS와 BFS
    url: https://www.acmicpc.net/problem/1260
    Silver 2
    date: 2022. 4. 6
*/

#include <iostream>
#include <queue>

#define endl "\n"

using namespace std;
int N, M, V;
queue<int> q;
bool map[1001][1001];
bool visit[1001];

void reset(int N){
    for(int i=0;i<=N;i++){
        visit[i] = false;
    }
}

void bfs(int start){
    q.push(start);
    visit[start] = true;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout << node << " ";
        for(int i=1;i<=N;i++){
            if(map[node][i] == true && visit[i] == false) {
                q.push(i);
                visit[i] = true;
            }
        }
    }
    cout << endl;
}

void dfs(int node){
    cout << node << " ";
    visit[node] = true;
    for(int i=1;i<=N;i++){
        if(map[node][i] == true && visit[i] == false){
            visit[i] = true;
            dfs(i);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N >> M >> V;

    for(int i=0; i<M; i++){
        int start, end;
        cin >> start >> end;
        map[start][end] = map[end][start] = true;
    }
    reset(N);
    dfs(V);
    cout << endl;
    reset(N);
    bfs(V);
    return 0;
}