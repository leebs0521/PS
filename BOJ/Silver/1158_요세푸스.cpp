/*
	BOJ 1158 - 요세푸스 문제
	Silver 5
*/

#include <iostream>

using namespace std;

int arr[5001];

int main(int argc, char** argv) {
	
	int i, n, k, cnt = 0, count = 0;
	
	scanf("%d %d", &n, &k);
	i = 1;
	printf("<");
	while(1){
		
		while(1){
			
			if(i > n)
				i = 1;	
			if(arr[i] == 0)
				count++;
			if(count == k){
				arr[i] = -1;
				break;
			}
			i++;
		}
		
		printf("%d",i);
		cnt ++;
		count = 0;
		
		if(n == cnt){
			printf(">\n");
			break;
		}
		
		printf(", ");
	}	
	return 0;
}




