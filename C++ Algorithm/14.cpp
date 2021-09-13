#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int reverse(int x){
	int i, len, res = 0, arr[6];
	for(i=0;i<6;i++){
		arr[i] = -1;
	}
	i = 0;
	while(x>0){
		arr[i++] = x%10;
		x /= 10;
	}
	len = i;
	for(i=0;i<len;i++){
		res = res*10 + arr[i];
	}
	return res;
}
bool isPrime(int x){
	int i;
	if( x == 1)
		return false;
	for(i=2; i<x;i++){#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int reverse(int x){
	int i, len, res = 0, arr[6];
	for(i=0;i<6;i++){
		arr[i] = -1;
	}
	i = 0;
	while(x>0){
		arr[i++] = x%10;
		x /= 10;
	}
	len = i;
	for(i=0;i<len;i++){
		res = res*10 + arr[i];
	}
	return res;
}
bool isPrime(int x){
	int i;
	if( x == 1)
		return false;
	for(i=2; i<x;i++){
		if(x%i == 0)
			return false;
	}
	return true;
}
int main(int argc, char** argv) {
	//freopen("input.txt","rt",stdin);
	int n, num, i, res;
	
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&num);
		res = reverse(num);
		if(isPrime(res) == 1)
			printf("%d ",res);
	}
	
}



		if(x%i == 0)
			return false;
	}
	return true;
}
int main(int argc, char** argv) {
	//freopen("input.txt","rt",stdin);
	int n, num, i, res;
	
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&num);
		res = reverse(num);
		if(isPrime(res) == 1)
			printf("%d ",res);
	}
	
}


