/*
    BOJ 4948 - 베르트랑 공준
    url: https://www.acmicpc.net/problem/4948
    Silver 2
    date: 2022. 7. 31
*/

#include <iostream>

#define endl "\n"
#define MAX_N 123456*2
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    bool prime[MAX_N+1] = {false, };
    int prime_cnt[MAX_N+1] = {0, };

    prime[0] = prime[1] = true;
    for(int i=2;i<=MAX_N;i++){
        for(int j=2; i*j <= MAX_N; j++){
            prime[i*j] = true;
        }
    }

    for(int i=1;i<=MAX_N;i++){
        // 소수면 i-1까지 소수 개수에서 +1
        if(!prime[i]){
            prime_cnt[i] = prime_cnt[i-1]+1;
        }

        // 소수가 아니면 i-1의 소수 개수
        else
            prime_cnt[i] = prime_cnt[i-1];
    }

    while(1){
        int n;

        cin >> n;

        if(n==0)
            break;
        else
            cout << prime_cnt[2*n] - prime_cnt[n] << endl;
    }
    return 0;
}