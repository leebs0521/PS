/*
    BOJ 9020 - 골드바흐의 추측
    url: https://www.acmicpc.net/problem/9020
    Silver 2 
    date: 2022. 7. 31
*/

#include <iostream>

#define endl "\n"
#define MAXN 10000
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    bool prime[MAXN+1] = {false, };

    prime[0] = prime[1] = true;

    for(int i=2;i<=MAXN;i++){
        for(int j=2; i*j <= MAXN; j++){
            prime[i*j] = true;
        }
    }

    int t;

    cin >> t;
    
    while(t--){
        int n;

        cin >> n;

        for(int i=n/2;i>=0;i--){
            if(!prime[i]  && !prime[n-i]){
                cout << i << " " << n-i << endl;
                break;
            }
        }
    }
    return 0;
}