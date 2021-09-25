/*
    BOJ 2741 - N 찍기
    url: https://www.acmicpc.net/problem/2741
    Bronze 3
    date: 2021. 9. 25
*/

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    
    int n;
    
    cin >> n;
    
    for(int i=1;i<=n;i++)
        cout << i << "\n";
    
    return 0;
}