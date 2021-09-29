/*
    BOJ 10816 - 숫자 카드 2
    url: https://www.acmicpc.net/problem/10816
    Silver 4 
    date: 2021. 9. 29
*/

#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    vector<int> v;

    cin >> n;
    for(int i=0;i<n;i++){
        int input;
        cin >> input;
        v.push_back(input);
    }
    
    sort(v.begin(),v.end());

    int m;

    cin >> m;
    for(int i=0;i<m;i++){
        int input;
        cin >> input;
        auto lower = lower_bound(v.begin(), v.end(), input);
        auto upper = upper_bound(v.begin(), v.end(), input);

        cout << upper - lower << " ";
    }
    return 0;
}