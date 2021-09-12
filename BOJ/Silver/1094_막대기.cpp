/*
	BOJ 1094 - 막대기
	Sliver 5
*/

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int n, i, cnt = 0, temp = 0, result, arr[7]= {64, 32, 16, 8, 4, 2, 1};
	
	scanf("%d",&n);
	
	for(i=0;i<7;i++){
		if(temp+arr[i]>n)
			continue;
		else if(temp+arr[i] == n){
			cnt++;
			break;
		}
		else if(temp+arr[i] < n){
			temp += arr[i];
			cnt++;
		}	
	}
	
	printf("%d\n",cnt);
	return 0;
}




