#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int arr1[58], arr2[58];

int main(int argc, char** argv) {
	//freopen("input.txt","rt",stdin);
	
	int n, num1, num2, res;
	scanf("%d",&n);
	while(n>0){
		scanf("%d %d",&num1, &num2);
		res = num1*(num1+1)/2;
		if(res != num2)
			printf("NO\n");
		else
			printf("YES\n");
		n--;
	}
	
	return 0;
}


