#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int arr1[58], arr2[58];

int main(int argc, char** argv) {
	//freopen("input.txt","rt",stdin);
	
	int i;
	char str[101];
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
		arr1[str[i]-'A']++;
	
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
		arr2[str[i]-'A']++;

	for(i=0;i<58;i++){
		if(arr1[i] != arr2[i]){
			printf("NO\n");
			return 0;
		}
	}	
	printf("YES\n");
	
	return 0;
}


