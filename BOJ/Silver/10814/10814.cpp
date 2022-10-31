/*
    BOJ 10814 - 나이순 정렬
    url: https://www.acmicpc.net/problem/10814
    Silver 5 
    date: 2021. 9. 29
*/

#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <algorithm>

#define endl "\n"

using namespace std;


bool compare(pair<int, string>a, pair<int, string>b){
    return a.first<b.first;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    vector<pair<int,string>> v;
    cin >> n;

    for(int i=0;i<n;i++){
        int age;
        string name;

        cin >> age >> name;

        v.push_back(make_pair(age, name));
    }
    
    // 같은 나이이면 입력순으로 정렬되야하므로 stable sort 사용
    stable_sort(v.begin(),v.end(),compare);

    for(int i=0;i<n;i++)
        cout << v[i].first << " " << v[i].second << endl;


    return 0;
}