/*
    BOJ 2577 - 숫자의 개수
    url: https://www.acmicpc.net/problem/2577
    Bronze 2
    date: 2021. 9. 23
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int a, b, c, arr[10]={0,};
    long long mul;
    string str;

    cin >> a >> b >> c;

    mul = a*b*c;
    str = to_string(mul);

    for(int i=0;i<str.length();i++)
        arr[str[i]-'0']++;

    for(int i=0;i<10;i++)
        cout << arr[i] << "\n";   

    return 0;
}