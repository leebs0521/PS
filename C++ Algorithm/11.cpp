#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//freopen("input.txt","rt",stdin);

	int n, i, cnt =0;
	int temp;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		temp = i;
		while(temp>0){
			temp /= 10;
			cnt++;
		}
	}
	printf("%d\n",cnt);
	
	return 0;
}


