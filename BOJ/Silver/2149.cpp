/*
    BOJ 2149 - 암호 해독
    url: https://www.acmicpc.net/problem/2149
    Silver 4
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int i, len, n, start, move[10];
    string key, cyp;
    vector<string> v;

    cin >> key >> cyp;
    len = key.length();
    n = cyp.length() / len;

    start = 0;
    while(n--){
        v.push_back(cyp.substr(start,len));
        start += len;
    }
    
   
    
    return 0;
}