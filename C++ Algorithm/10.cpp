#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int digit_sum(int x){
	int sum = 0;
	while(x>0){
		sum += x % 10;
		x /= 10;
	}
	return sum;
}

int main(int argc, char** argv) {
	//freopen("input.txt","rt",stdin);

	int n, num, res, sum, i, max = -1;
	
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&num);
		sum = digit_sum(num);
		if(max < sum){
			res = num;
			max = sum;
		}
		else if(max == sum){
			if(num > res) res= num;
		}
	}
	
	printf("%d\n",res);
	
	return 0;
}


