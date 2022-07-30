/*
    BOJ 5622 - 다이얼
    url: https://www.acmicpc.net/problem/5622
    Bronze 4
    date: 2022. 7. 30
*/

#include <iostream>

#define endl "\n"

using namespace std;

int alpha[28] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7 , 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int cnt = 0;
    string str;

    cin >> str;

    for(int i=0;i<str.length();i++){
        int idx = str[i] - 'A';
        cnt += alpha[idx];
    }

    cout << cnt << endl;
    return 0;
}