/*
    BOJ 1158 - 요세푸스 문제
    url: https://www.acmicpc.net/problem/1158
    Silver 5
    date: 2021.9.18
*/

#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, k, cnt = 1;
    queue<int> q;

    cin >> n >> k;

    for(int i=1;i<=n;i++)
        q.push(i);

    cout << "<";
    while(!q.empty()){
        if(cnt == k){
            cout << q.front(); 
            q.pop();
            cnt = 1;
            if(q.size()>=1)
                cout << ", ";
        }
        else{
            int item = q.front();
            q.pop();
            q.push(item);
            cnt++;
        }
        
    }
    cout <<">\n";
    return 0;
}