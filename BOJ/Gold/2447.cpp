/*
    BOJ 2447 - 별 찍기 - 10
    url: https://www.acmicpc.net/problem/2447
    Gold 5
    date: 2022. 7. 31
*/

#include <iostream>

#define endl "\n"

using namespace std;

void star(int i, int j, int n){
	if((i / n) % 3 == 1 && (j / n) % 3 == 1)
		cout << " ";
	else if(n / 3 == 0)
		cout << "*";
	else
		star(i, j, n / 3);
	
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			star(i, j, n);
		cout << '\n';
	}

    return 0;
}