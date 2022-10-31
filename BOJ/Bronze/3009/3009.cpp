/*
    BOJ 3009 - 네번째 점
    url: https://www.acmicpc.net/problem/3009
    Bronze 3
    date: 2022. 8. 1
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int x[4], y[4];

    for(int i=0;i<3;i++)
        cin >> x[i] >> y[i];

    if(x[0] == x[1])
        cout << x[2];
    else if(x[0] == x[2])
        cout << x[1];
    else
        cout << x[0];
    cout << " ";
    
    if(y[0] == y[1])
        cout << y[2];
    else if(y[0] == y[2])
        cout << y[1];
    else
        cout << y[0];

    return 0;
}