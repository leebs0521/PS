/*
    BOJ 2566 - 최댓값
    url: https://www.acmicpc.net/problem/2566
    Bronze 3    
    date: 2022. 11. 10
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int max = -1;
    int max_i, max_j;
    int n;

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin >> n;
            if(n > max){
                max = n;
                max_i = i+1;
                max_j = j+1;
            }
        }
    }

    cout << max << endl;
    cout << max_i << " " << max_j;
    return 0;
}