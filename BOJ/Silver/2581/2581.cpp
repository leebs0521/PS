/*
    BOJ 2581 - 소수
    url: https://www.acmicpc.net/problem/2581
    Silver 5 
    date: 2022. 7. 31
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    bool is_prime[10001]={false, };
    int n, m;
    bool prime_has = false;
    is_prime[0] = is_prime[1] = true;

    cin >> m >> n;
    
    // 소수 색칠

    for(int i=2; i<n; i++){
        for(int j=2; i*j <= 10000 && i*j <= n; j++){
            is_prime[i*j] = true;
        }
    }

    int sum = 0, min_val;

    for(int i=m; i<=n;i++){
        if(!is_prime[i]){
            sum += i;
            if(!prime_has){
                min_val = i;
                prime_has = true;
            }
        }
    }

    if(prime_has){
        cout << sum << endl << min_val;
    }
    else
        cout << -1;

    return 0;
}