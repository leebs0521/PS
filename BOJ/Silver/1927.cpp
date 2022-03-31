/*
    BOJ 1927 - 최소 힙
    url: https://www.acmicpc.net/problem/1927
    Silver 2
    date: 2022. 3. 31
*/

#include <iostream>
#include <queue>
#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N;
    priority_queue<int, vector<int>, greater<int>> q;
    cin >> N;

    for(int i=0; i<N; i++){
        int x;
        cin >> x;
        if(x == 0){
            if(q.empty())
                cout << 0 << endl;
            else {
                cout << q.top() << endl;
                q.pop();
            }
        }
        else{
            q.push(x);
        }
    }
    return 0;
}