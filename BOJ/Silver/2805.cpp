/*
    BOJ 2805 - 나무 자르기
    url: https://www.acmicpc.net/problem/2805
    Silver 3 
    date: 2022.3.8
*/

#include <iostream>

#define MAX 1000001
#define endl "\n"

using namespace std;

long long arr[MAX];
long long N, M;

bool check(long long height){
    long long sum = 0;
    for(int i=0;i<N;i++){
        if(arr[i] <= height)
            continue;
        sum += arr[i] - height;
    }
    if(sum >= M)
        return true;
    else
        return false;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    long long low = 0, high = 0;
    long long result = 0;

    cin >> N >> M;

    for(int i=0;i<N;i++){
        cin >> arr[i];
        high = max(high, arr[i]);
    }

    while(low <= high){
        long long mid = (high+low)/2;
        bool flag = check(mid);

        if(flag == true){
            low = mid+1;
            result = max(result, mid);
        }
        else
            high = mid-1;
    }

    cout << result << endl;

    return 0;
}