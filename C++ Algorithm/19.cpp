#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//freopen("input.txt","rt",stdin);
	
	int n, i, arr[100], max, cnt = 0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	max = arr[n-1];
	for(i=n-1;i>=0;i--){
		if(max<arr[i]){
			cnt++;
			max = arr[i];
		}
	}
	printf("%d\n",cnt);
}


