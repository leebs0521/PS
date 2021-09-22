/*
    BOJ 2609 - 최대공약수와 최소공배수
    url: https://www.acmicpc.net/problem/2609
    Silver 5
    date: 2021.9.22 
*/

#include <iostream>

using namespace std;

int func_gcd(int a, int b){
    
    int temp;

    while(b>0){
        
        temp = a%b;
        a = b;
        b = temp;
    }
    return a;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int a, b, lcm, gcd;

    cin >> a >> b;

    if(a > b)
        gcd = func_gcd(a, b);
    else
        gcd = func_gcd(b, a);

    lcm = a * b / gcd;

    cout << gcd << "\n" << lcm << "\n";

    return 0;
}