/*
    BOJ 1934 - 최소 공배수
    url: https://www.acmicpc.net/problem/1934
    Silver 5
*/

#include <iostream>

using namespace std;
int fgcd(int a, int b){
    int r;
    // gcd ---> if b > 0 , gcd(b,a%b)
    while(b>0){
        r = a%b;
        a = b;
        b = r;
    }
    return a;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int T, a, b, gcd;

    cin >> T;

    while(T>0){
        cin >> a >> b;
        if(b>a) gcd = fgcd(b, a);
        else gcd = fgcd(a, b);
    
        //lcm = a * b / gcd;
        cout << a*b/gcd << endl;

        T--;
    }
    return 0;
}