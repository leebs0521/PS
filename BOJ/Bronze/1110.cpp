/*
    BOJ 1110 - 더하기 사이클
    url: https://www.acmicpc.net/problem/1110
    Bronze 1
    date: 2022. 7. 30
*/

#include <iostream>

#define endl "\n"

using namespace std;

int Cycle(int n){
    if(n < 10){
        return 11 * n;
    }
    else{
        int front, back;
        front = n / 10;
        back = n % 10;
        return back*10 + (front+back)%10;
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, cnt = 0;

    cin >> n;

    int temp_n = n;
    while(1){
        cnt++;
        int new_val = Cycle(temp_n);

        if(n == new_val){
            break;
        }
        else{
            temp_n = new_val;
        }
    }

    cout << cnt;
    return 0;
}