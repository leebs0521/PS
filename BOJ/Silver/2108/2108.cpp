/*
    BOJ 2108 - 통계학
    url: https://www.acmicpc.net/problem/2108
    Silver 3
    date: 2022.3.10
*/

#include <iostream>
#include <cmath>
#define endl "\n"

using namespace std;

int arr[8001];
int array[500001];

int compare(const void* a, const void* b){
	const int* x = (int*) a;
	const int* y = (int*) b;
 
	if (*x > *y)
		return 1;
	else if (*x < *y)
		return -1;
 
	return 0;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    long long sum = 0;

    int N, high = -40001, low = 40001;

    cin >> N;

    for(int i=0;i<N;i++){
        int temp;

        cin >> temp;

        high = max(high, temp);
        low = min(low, temp);

        arr[temp+4000]++;
        array[i] = temp;
        sum += temp;
    }
    int maxv = arr[0], cnt = 0, maxi;

    for(int i=1;i<8001;i++){
        if(arr[i] > maxv){
            maxv = arr[i];
        }
    }
    for(int i=0;i<8001;i++){
        if(arr[i] == maxv){
            cnt++;
            maxi = i;
        }
        if(cnt == 2)
            break;
    }
    qsort(array, N, sizeof(int), compare);

    double avg = sum/(float)N;
    if(avg < 0 && avg > -0.5)
        avg = 0;
    printf("%1.lf\n",round(avg));
    printf("%d\n",array[N/2]);
    printf("%d\n", maxi-4000);
    printf("%d\n", array[N-1] - array[0]);
    return 0;
}