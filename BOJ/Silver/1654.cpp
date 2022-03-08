/*
    BOJ 1654 - 랜선 자르기
    url: https://www.acmicpc.net/problem/1654
    Silver 3 
    date: 2022.3.8
*/

#include <iostream>

#define endl "\n"

using namespace std;

long long arr[10001];
long long N, K;
bool check(long long len){
    long long sum = 0;
    for(int i=0;i<N;i++){
        sum += arr[i]/len;
    }
    if(sum >= K)
        return true;
    else
        return false;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    long long low = 1, high = -1, result = 0;

    cin >> N >> K;

    for(int i=0;i<N;i++){
        cin >> arr[i];
        high = max(high, arr[i]);
    }
    if(N == K){
        cout << high << endl;
        return 0;
    }
    while(low <= high){
        long long mid = (low+high)/2;
        bool flag = check(mid);
        if(flag){
            low = mid+1;
            result = max(result, mid);
        }
        else{
            high = mid-1;
        }
    }

    cout << result <<endl;   
    return 0;
}