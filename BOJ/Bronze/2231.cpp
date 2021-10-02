/*
    BOJ 2231 - 분해합
    url: https://www.acmicpc.net/problem/2231
    Bronze 2 
    date: 2021. 10. 2
*/

#include <iostream>
#include <string>

#define endl "\n"

using namespace std;


int solve(int a){
    int result = a;
    string str = to_string(a);

    for(int i =0;i<str.length();i++)
        result += str[i]-'0';

    return result;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;

    cin >> n;

    for(int i=1;i<=n;i++){
        int a = solve(i);

        if( a == n){
            cout << i << endl;
            return 0;
        }
    }

    cout << 0 << endl;
    return 0;
}