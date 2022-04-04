/*
    BOJ 11659 - 구간 합 구하기 4
    url: https://www.acmicpc.net/problem/11659
    Silver 3 
    date: 2022. 4. 3
*/

#include <iostream>

#define endl "\n"

using namespace std;

int arr[100001];
int sum[100001];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N, M;

    cin >> N >> M;

    for(int i=1;i<=N;i++){
        cin >> arr[i];
        sum[i] = sum[i-1] + arr[i];
    }

    for(int i=1;i<=M;i++){
        int start, end;
        cin >> start >> end;
        cout << sum[end] - sum[start-1] << endl;
    }
    return 0;
}