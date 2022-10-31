/*
    BOJ 2908 - 상수
    url: https://www.acmicpc.net/problem/2908
    Bronze 2
    date: 2021. 9. 23
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string a, b, max;

    cin >> a >> b;

    for(int i=2;i>=0;i--){
        if(a[i] > b[i]){
            max = a;
            break;
        }
        else if(a[i] < b[i]){
            max = b;
            break;
        }
    }
    
    cout << max[2] << max [1] << max[0] << "\n";

    return 0;
}