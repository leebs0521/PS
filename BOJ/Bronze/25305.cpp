/*
    BOJ 25305 - 커트라인
    url: https://www.acmicpc.net/problem/25305
    Bronze 2
    date: 2022. 8. 6
*/

#include <iostream>
#include <algorithm>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, k, arr[1000];

    cin >> n >> k;

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    cout << arr[n-k];


    
    return 0;
}