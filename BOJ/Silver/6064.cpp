/*
    BOJ 6064 - 카잉 달력
    url: https://www.acmicpc.net/problem/6064
    Silver 1 
    date: 2021. 10. 1
*/

#include <iostream>

#define endl "\n"

using namespace std;

int gcd(int a, int b);
int lcm(int a, int b);

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, M, N, x, y, i, j, limit; 

    cin >> t;

    for(i=0;i<t;i++){
        cin >> M >>  N >> x >> y;
        
        limit = lcm(M, N);
        for(j=x; j<limit; j += M){
            int temp = (j%N == 0) ? N : j%N;
            if(temp == y){
                cout << j << endl;
                break;
            }  
        }
        if(j >= limit)
            cout << -1 << endl;
    }   
    return 0;
}

int gcd(int a, int b){
    int temp;

    while(b>0){
        temp = a%b;
        a = b;
        b = temp;
    }
    return a;
}

int lcm(int a, int b){
    return a*b/gcd(a,b);
}
