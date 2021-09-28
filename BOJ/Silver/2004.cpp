/*
    BOJ 2004 - 조합 0의 개수
    url: https://www.acmicpc.net/problem/2004
    Silver 2
    date: 2021. 9. 23
*/

#include <iostream>

using namespace std;

long long countX(long long a, long long x){

    long long sum = 0;
    for(long long i=x;a/i>=1;i*=x){
        sum += a/i;
    }

    return sum;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    long long n, m, five = 0, two = 0;
    
    cin >> n >> m;

    two = countX(n,2) - countX(m,2) - countX(n-m,2);
    five = countX(n,5) - countX(m,5) - countX(n-m,5);

    cout << min(two, five) << "\n";

    return 0;
}