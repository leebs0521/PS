/*
    BOJ 2751 - 수 정렬하기 2
    url: https://www.acmicpc.net/problem/2751
    Silver 5
    date: 2021. 9. 29
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int input;
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++)
        cout << v[i] << "\n";
    return 0;
}