#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//freopen("input.txt","rt",stdin);

	int n, i, sum = 0, cnt = 1, digit = 9, res = 0;
	
	scanf("%d",&n);
	
	while(sum+digit<n){
		res += digit*cnt;
		sum += digit;
		cnt++;
		digit *= 10;
	}
	res += (n-sum)*cnt;
	printf("%d\n",res);
	return 0;
}


