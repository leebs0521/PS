/*
    BOJ 10952 - A+B -5
    url: https://www.acmicpc.net/problem/10952
    Bronze 3
    date: 2021. 9. 26
*/

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    while(1){
        int a, b;

        cin >> a >> b;

        if(a == 0 && b == 0)
            break;

        cout << a+b << "\n";
    }
    return 0;
}