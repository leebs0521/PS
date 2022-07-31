/*
    BOJ 11653 - 소인수 분해
    url: https://www.acmicpc.net/problem/11653
    Bronze 1
    date: 2022. 7. 31
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, divide = 2;

    cin >> n;
    
    while(n > 1){
        if(n%divide == 0){
            n = n/divide;
            cout << divide << endl;
        }
        else{
            divide++;
        }
    }
    return 0;
}