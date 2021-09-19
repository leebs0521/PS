/*
    BOJ 17298 - 오큰수
    url: https://www.acmicpc.net/problem/17298
    Gold 4
    date: 2021.9.18
*/

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;

    cin >> n;

    vector<int> arr(n), ans(n,-1);
    stack<int> s;

    for(int i =0;i<n;i++) cin >> arr[i];

    for(int i=0;i<n;i++){
        while(!s.empty() && arr[s.top()] < arr[i]){
            ans[s.top()] = arr[i];
            s.pop();
        }

        s.push(i);
    }

    for(int i=0;i<n;i++) cout << ans[i] << " ";
    cout << "\n";
    return 0;
}