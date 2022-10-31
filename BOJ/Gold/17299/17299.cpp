/*
    BOJ 17299 - 오등큰수
    url: https://www.acmicpc.net/problem/17299
    Gold 3
    date: 2021.9.19
*/

#include <iostream>
#include <map>
#include <vector>
#include <stack>

using namespace std;
int visited[1000000];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;

    cin >> n;

    vector<int> arr(n), ans(n,-1);
    stack<pair<int, int>> s;

    for(int i=0; i<n ;i++) {
        int input;
        cin >> input;
        arr[i] = input;
        visited[input]++;
    }

    for(int i=n-1;i>=0;i--){

        while(!s.empty() && visited[arr[i]] >= s.top().first){
            s.pop();
        }

        if(!s.empty())
            ans[i] = s.top().second;

        s.push({visited[arr[i]], arr[i]});
    }

    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }



    return 0;
}


// 다음에 다시 도전