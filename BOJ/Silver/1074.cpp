/*
    BOJ 1074 - Z
    url: https://www.acmicpc.net/problem/1074
    Silver 1 
    date: 2022. 4. 3
*/

#include <iostream>

#define endl "\n"

using namespace std;

int r, c, N, ans;
void Z(int x, int y, int size){
    if(x == c && y == r){
        cout << ans << endl;
        return;
    }
    else if (r < y + size && r >= y && c < x + size && c >= x){
        Z(x, y, size / 2);
        Z(x + size / 2, y , size / 2);
        Z(x, y + size / 2, size / 2);
        Z(x + size / 2, y + size / 2, size / 2);
    }
    else
        ans += size*size;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N >> r >> c;

    Z(0,0,1<<N);
    return 0;
}