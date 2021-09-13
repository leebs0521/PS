#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int res(int x, int y){
	if( x == y)
		return 0;
	else if (x == 1 && y == 2)
		return -1;
	else if (x == 1 && y == 3)
		return 1;
	else if (x == 2 && y == 1)
		return 1;
	else if (x == 2 && y == 3)
		return -1;
	else if (x == 3 && y == 1)
		return -1;
	else
		return 1;
}
int main(int argc, char** argv) {
	//freopen("input.txt","rt",stdin);
	
	int n, i,a[100],b[100], result;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(i=0;i<n;i++)
		scanf("%d", &b[i]);
	for(i=0;i<n;i++)
		
	for(i=0;i<n;i++){
		result = res(a[i],b[i]);
		if(result == 0)
			printf("D\n");
		else if(result == 1)
			printf("A\n");
		else
			printf("B\n");		
	}
}



