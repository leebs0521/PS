/*
    BOJ 1312 - 소수
    Silver 5
*/

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int a, b, n, temp, ans;

    cin >> a >> b >> n;

    temp = (a%b)*10;

    while(n > 0){
        ans = temp / b;
        temp = (temp%b)*10;
        n--;
    }
    cout << ans << endl;
    return 0;
}