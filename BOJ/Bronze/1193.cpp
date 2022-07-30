/*
    BOJ 1193 - 분수 찾기
    url: https://www.acmicpc.net/problem/1193
    Bronze 1
    date: 2022. 7. 30
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, i = 1;

    cin >> n;

    while(n > i){
        n -= i;
        i++;
    }
    if (i % 2 == 1)
		cout << i + 1 - n << '/' << n << endl;
	else
		cout << n << '/' << i + 1 - n << endl;

    return 0;
}