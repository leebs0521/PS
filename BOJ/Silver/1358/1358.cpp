/*
    BOJ 1358 - 하키
    url: https://www.acmicpc.net/problem/1358
    Silver 4
    date: 2022. 8. 4
*/

#include <iostream>
#include <cmath>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    double w, h, x, y, p;
    double r, cx_1, cx_2, cy_1, cy_2;
    int cnt = 0;

    cin >> w >> h >> x >> y >> p;

    r = h/2;
    cx_1 = x;
    cy_1 = y + r;
    cx_2 = x + w;
    cy_2 = y + r;

    for(int i=0;i<p;i++){
        double x1, y1;

        cin >> x1 >> y1;

        // x <= x1 <= x+w 직사격형에 있는 경우
        // y <= y1 <= y+h 이면 직사각형 안에 있음
        if(x <= x1 && x1 <= x+w){
            if(y <= y1 && y1 <= y+h)
                cnt++;
        }
        
        // 왼쪽 반원에 있는 경우
        else if(x-r <= x1 && x1 < x){
            if(pow(cx_1-x1,2) + pow((cy_1-y1),2) <= r*r)
                cnt++;
        }

        // 오른쪽 반원에 있는 경우
        else if(x1 > x+w && x1 <= x+w+r){
            if(pow(cx_2-x1,2) + pow((cy_2-y1),2) <= r*r)
                cnt++;
        }
    }

    cout << cnt;
    return 0;
}