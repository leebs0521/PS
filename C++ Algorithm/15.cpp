#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//freopen("input.txt","rt",stdin);
	int n, i, j, flag, cnt = 0;
	
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		flag = 1;
		for(j=2; j*j<=i;j++){
			if(i%j==0){
				flag = 0;
				break;
			}
		}
		if(flag==1)
			cnt++;
	}
	printf("%d\n",cnt);
}


