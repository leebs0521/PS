/*
    BOJ 2884 - 알람 시계
    url: https://www.acmicpc.net/problem/2884
    Bronze 3
    date: 2021. 9. 26
*/

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int H, M;

    cin >> H >> M;

    if(M >= 45)
        M = M - 45;
    
    else{
        H =  H-1; 
        M = M + 60 - 45;
    }

    if(H < 0)
        H = 23;
    
    cout << H << " " << M << "\n";
    return 0;
}