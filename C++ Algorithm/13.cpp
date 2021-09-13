#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//freopen("input.txt","rt",stdin);

	int i, max;
	char n[100];
	int arr[10]={0,};
	
	scanf("%s",n);
	
	for(i=0;n[i]!='\0';i++){
		arr[n[i]-'0']++;
	}
	max = 0;
	for(i=1;i<10;i++){
		if(arr[i]>=arr[max])
			max = i;
	}
	printf("%d\n",max);
}


