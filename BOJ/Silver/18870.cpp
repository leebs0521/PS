/*
    BOJ 18870 - 좌표 압축
    url: https://www.acmicpc.net/problem/18870
    Silver 1
    date: 2022. 4. 2
*/

#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"

using namespace std;
int arr[1000001];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N;
    vector<int> v;
    cin >> N;

    for(int i=0;i<N;i++){
        int x;  cin >> x;
        arr[i] = x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(), v.end()),v.end());

    for(int i=0;i<N;i++){
        auto it = lower_bound(v.begin(),v.end(),arr[i]);
        cout << it - v.begin() << " ";
    }
    return 0;
}

