/*
    BOJ 2438 - 별 찍기 - 1
    url: https://www.acmicpc.net/problem/2438
    Bronze 3
    date: 2021. 9. 23
*/

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0; j<=i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}