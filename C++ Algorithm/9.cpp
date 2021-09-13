#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//freopen("input.txt","rt",stdin);

	int n, i, j;
	int cnt[50001]={0,};
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=i;j<=n;j+=i){
			cnt[j]++;
		}
	}
	for(i=1;i<=n;i++){
		printf("%d ",cnt[i]);
	}
	
	return 0;
}