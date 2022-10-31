/*
    BOJ 1427 - 소트인사이드
    url: https://www.acmicpc.net/problem/1427
    Silver 5
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, i;
    vector<int> v;

    cin >> n;

    while(n>0){
        v.push_back(n%10);
        n /= 10;
    }
    sort(v.begin(),v.end());
    for(i=v.size()-1;i>=0;i--){
        cout << v[i];
    }
    cout << endl;
    return 0;
}