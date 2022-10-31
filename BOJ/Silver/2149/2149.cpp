/*
    BOJ 2149 - 암호 해독
    url: https://www.acmicpc.net/problem/2149
    Silver 4
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string key, cip;
    vector<pair<char, int>> seq;
    vector<string> str;
    cin >> key >> cip;

    int len, n, i, j, start, se[10];
    
    
    len = key.length();
    n = cip.length() / len;
    start = 0;
    
    //  암호문 입력 받기
    for(i=0;i<len;i++){
        str.push_back(cip.substr(start,n));
        start += n;
    }

    // key에 따른 순서 변화
    for(i=0; i<len;i++)
        seq.push_back({key[i], i});
    
    sort(seq.begin(),seq.end());

    // 암호문 -> 평문을 위한 인덱싱
    for(i=0;i<len;i++)
        se[seq[i].second]=i;

    // 인덱싱 해논 순서대로 출력
    for(i=0;i<n;i++){
        for(j=0;j<str.size();j++){
            cout << str[se[j]][i];
        }
    }

    cout << endl;
    
    return 0;
}