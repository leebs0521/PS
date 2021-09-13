#include <iostream>
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//freopen("input.txt","rt",stdin);
	
	char str[101];
	int i;
	
	gets(str);
	for(i=0;i<str[i]!='\0';i++){
		if(str[i] >= 'a' && str[i] <= 'z')
			printf("%c",str[i]);
		else if(str[i] >= 'A' && str[i] <= 'Z')
			printf("%c", str[i] +('a'-'A'));
	}
	printf("\n");
	return 0;
}