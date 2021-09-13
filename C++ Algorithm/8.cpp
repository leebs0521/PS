#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//freopen("input.txt","rt",stdin);
	int i, cnt = 0, result = -1;
	char str[31];
	scanf("%s",str);
	
	for(i=0;str[i]!='\0';i++){
		if(str[i] == '(') cnt++;
		else if(str[i] == ')') cnt--;
		if(cnt < 0)	break;
	}
	if(cnt == 0)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}