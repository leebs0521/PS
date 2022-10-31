/*
    BOJ 10818 - 최소, 최대
    url: https://www.acmicpc.net/problem/10818
    Bronze 3
    date: 2021. 9. 26
*/

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
 
	ios_base::sync_with_stdio(0);
 
	
	int min = 1000001;
	int max = -1000001;
 
	int N;
	cin >> N;
 
	int input;
	for(int i = 0; i < N; i++) {
		cin >> input;
 
		
		if (input < min) {
			min = input;
		}
		
		if (input > max) {
			max = input;
		}
	}
 
	cout << min << " " << max;
	return 0;
 
}