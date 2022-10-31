/*
    BOJ 2753 - 윤년
    url: https://www.acmicpc.net/problem/2753
    Bronze 4
    date: 2021. 9. 26
*/

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    bool flag;
    cin >> n;

    if(n%4 == 0 && n%100 != 0)
        flag = true;
    else if(n%100 == 0 && n%400 != 0)
        flag = false;
    else if(n%400 == 0)
        flag = true;
    else
        flag = false;
    
    cout << (int)flag;
    return 0;
}