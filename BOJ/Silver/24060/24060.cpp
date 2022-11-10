/*
    BOJ 24060 - 알고리즘 수업 - 병합 정렬1
    url: https://www.acmicpc.net/problem/2406
    Silver 4
    date: 2022. 11. 10
*/

#include <iostream>

#define endl "\n"

using namespace std;


int N, K, cnt, n;
int arr[500000];
int sorted[500000];


void merge(int p, int q, int r){
    int i = p;
    int j = q+1;
    int t = 1;

    while(i <= q && j <= r){
        if(arr[i] <= arr[j]){
            sorted[t++] = arr[i++];
        }
        else{
            sorted[t++] = arr[j++];
        }
    }

    while(i <= q){
        sorted[t++] = arr[i++];
    }

    while(j <= r){
        sorted[t++] = arr[j++];
    }

    i = p;
    t = 1;

    while(i <= r){
        arr[i++] = sorted[t++];
        cnt++;
        if(cnt == K)
            n = sorted[t-1];
    }
}

void merge_sort(int p, int r){
    if(p < r ){
        int q = (p + r)/2;
        merge_sort(p, q);
        merge_sort(q+1, r);
        merge(p,q,r);
    }
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N >> K;

    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    merge_sort(0, N-1);
    if(cnt < K)
        cout << -1;
    else
        cout << n;
    return 0;
}