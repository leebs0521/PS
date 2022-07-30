/*
    BOJ 11022 - A+B -8
    url: https://www.acmicpc.net/problem/11022
    Bronze 5 
    date: 2022. 7. 30
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;

    cin >> n;
    for(int i=1;i<=n;i++){
        int x, y;
        cin >> x >> y;

        cout << "Case #" << i << ": " << x << " + " << y << " = " << x + y << endl;
    }
    return 0;
}