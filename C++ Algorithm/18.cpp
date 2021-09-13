#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//freopen("input.txt","rt",stdin);
	
	int n, m, i, cnt = 0, max = -1, num;
	
	scanf("%d %d",&n,&m);
	
	for(i=0;i<n;i++){
		scanf("%d",&num);
		
		if(num>m)
			cnt++;
		else
			cnt = 0;
		
		if(max < cnt)
			max = cnt;
			
	}	
	
	if(max == 0)
		printf("%d\n",-1);
	else
		printf("%d\n",max);
	return 0;
}


