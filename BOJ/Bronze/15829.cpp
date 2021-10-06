/*
    BOJ 15829 - Hashing
    url: https://www.acmicpc.net/problem/15829
    Bronze 2
    date: 2021. 10 .6
*/

#include <iostream>
#include <string>

#define endl "\n"

using namespace std;

const int M = 1234567891;
const int r = 31;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int len;
    string str;

    cin >> len >> str;

    long long mul = 1;
    long long ans = 0;

    for(int i=0;i<len;i++){
        ans = (ans +(str[i]-'a'+1)*mul)%M;
        mul = (mul*r)%M;
    }

    cout << ans << endl;
    return 0;
}