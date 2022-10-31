/*
    BOJ 11399 - ATM
    url: https://www.acmicpc.net/problem/11399
    Silver 3
    date: 2022. 3. 31
*/

#include <iostream>
#include <algorithm>

#define endl "\n"

using namespace std;

int arr[1000];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N, ans = 0, wait = 0;

    cin >> N;

    for(int i=0;i<N;i++){
        cin >> arr[i];
    }

    sort(arr, arr+N);

    for(int i=0;i<N;i++){
        ans += wait + arr[i];
        wait += arr[i];
    }

    cout << ans << endl;
    return 0;
}