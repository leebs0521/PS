/*
    BOJ 11866 - 요세푸스 문제 0
    url: https://www.acmicpc.net/problem/11866
    Silver 4 
    date: 2021. 9. 29
*/

#include <iostream>
#include <queue>
#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, k, cnt = 0;
    queue<int> q;

    cin >> n >> k;

    for(int i=1;i<=n;i++)
        q.push(i);

    cout << "<";
    while(!q.empty()){
        int item;
        item = q.front();
        cnt++;
        if(cnt%k==0){
            cout << item;
            if(q.size() != 1)
            cout <<", ";
        }
        else
            q.push(item);
        q.pop();    
   }
    cout << ">";
    return 0;
}