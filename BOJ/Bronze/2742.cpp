/*
    BOJ 2742 - 기찍 N
    url: https://www.acmicpc.net/problem/2742
    Bronze 3
    date: 2021. 9. 26
*/

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    
    int n;
    
    cin >> n;
    
    for(int i=n;i>0;i--)
        cout << i << "\n";
    
    return 0;
    
}