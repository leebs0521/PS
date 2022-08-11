/*
    BOJ 2559 - 수열
    url: https://www.acmicpc.net/problem/2559
    Silver 3
    date: 2022. 8. 11
*/

#include <iostream>
#include <climits>

#define endl "\n"

using namespace std;

int n, k, mius_val, max_val = INT_MIN;
int arr[100001], sum[100001];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    
    
    cin >> n >> k;

    for(int i=1;i<=n;i++){
        cin >> arr[i];
        sum[i] = sum[i-1] + arr[i]; 
    }

    mius_val = 0;
    for(int i=0;i<=n-k;i++){
        int temp = sum[i+k] - mius_val;
        mius_val += arr[i+1];
        max_val = max(max_val, temp);
    }

    cout << max_val;
    return 0;
}