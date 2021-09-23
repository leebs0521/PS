/*
    BOJ 2439 - 별 찍기 - 2
    url: https://www.acmicpc.net/problem/2439
    Bronze 3
    date: 2021. 9. 23
*/

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;

    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++)
            cout << " ";
        for(int j=0;j<i;j++)
            cout << "*";
        cout << "\n";
    }
    return 0;
}