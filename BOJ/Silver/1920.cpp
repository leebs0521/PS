/*
    BOJ 1920 - 수 찾기
    url: https://www.acmicpc.net/problem/1920
    Silver 4 
    date: 2021. 9. 29
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m;
    vector<int> v;

    cin >> n;
    for(int i=0;i<n;i++){
        int input;
        cin >> input;
        v.push_back(input);
    }

    cin >> m;

    for(int i=0;i<m;i++){
        int input;
        cin >> input;
        auto it = find(v.begin(),v.end(), input);
        if(it == v.end())
            cout << "0\n";
        else
            cout <<"1\n";
    }
    return 0;
}