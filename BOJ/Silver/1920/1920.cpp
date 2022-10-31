/*
    BOJ 1920 - 수 찾기
    url: https://www.acmicpc.net/problem/1920
    Silver 4 
    date: 2021. 9. 29
*/

#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 100001

using namespace std;

int arr[MAX];

int compare(const void* a, const void* b){
    const int* x = (int* ) a;
    const int* y = (int* ) b;

    if(*x > *y)
        return 1;
    else if(*x < *y)
        return -1;

    return 0;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N, n;

    cin >> N;

    for(int i=0;i<N;i++)    cin >> arr[i];

    qsort(arr, N, sizeof(int), compare);

    cin >> n;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;

        if(bsearch(&temp, arr, N, sizeof(int), compare) != NULL)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}