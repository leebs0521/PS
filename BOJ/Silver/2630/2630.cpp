/*
    BOJ 2630 - 색종이
    url: https://www.acmicpc.net/problem/2630
    Silver 3
    date: 2022. 3. 29
*/

#include <iostream>

#define endl "\n"

using namespace std;


int paper[128][128];
int white, blue;

void check(int x, int y, int n){
    bool Zero, One;
    Zero = One = true;

    for(int i=x; i<x+n; i++){
        for(int j=y; j<y+n; j++){
            if(paper[i][j] == 0)    One = false;
            if(paper[i][j] == 1)    Zero = false;
        }
    }
    if(One){
        blue++;
        return;
    }
    if(Zero){
        white++;
        return;
    }

    check(x,y,n/2);
    check(x,y+n/2,n/2);
    check(x+n/2,y,n/2);
    check(x+n/2,y+n/2,n/2);

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N;

    cin >> N;

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> paper[i][j];
        }
    }
    check(0,0,N);
    cout << white << endl;
    cout << blue << endl;

    return 0;
}