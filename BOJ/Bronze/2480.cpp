/*
    BOJ 2480 - 주사위 세개
    url: https://www.acmicpc.net/problem/2480
    Bronze 4 
    date: 2022. 7. 30
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int x, y, z, ans;

    cin >> x >> y >> z;

    if(x == y && x == z){
        ans = 10000 + x * 1000;
    }
    else if(x != y && x != z && y != z){
        ans = max(x, max(y, z))*100;
    } 
    else{
        if(x == y){
            ans = 1000 + x *100;
        }
        else if(x == z){
            ans = 1000 + x * 100;
        }
        else if(y == z){
            ans = 1000 + y * 100;
        }
    }

    cout << ans;
    return 0;
}