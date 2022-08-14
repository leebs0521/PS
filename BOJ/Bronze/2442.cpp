/*
    BOJ 2442 - 별 찍기 - 5
    url: https://www.acmicpc.net/problem/2442
    Bronze 3
    date: 2022. 8. 14
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin>>n;

    for (int i=1; i<=n; i++) {
        for(int j=1;j<=n-i;j++) {
            cout << " ";
        }
        for (int j=1 ; j<=2*i-1; j++) {
            cout << "*";
        }
        
        cout << "\n";
    }
    return 0;
}