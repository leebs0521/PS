/*
    BOJ 1002 - 터렛
    url: https://www.acmicpc.net/problem/1002
    Silver 2
    date: 2022. 8. 2
*/

#include <iostream>
#include <cmath>

#define endl "\n"

using namespace std;

double dist(int x1, int y1, int x2, int y2){
    int diff_x = x1 - x2;
    int diff_y = y1 - y2;

    return sqrt(pow(diff_x, 2) + pow(diff_y, 2));
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;

    cin >> t;

    
    while(t--){
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        double d = dist(x1,y1,x2,y2);

        
        if(d == 0 && r1 == r2)
            cout << -1;

        else if(r1 + r2 == d || abs(r1-r2) == d)
            cout << 1;
        
        else if(abs(r1-r2) < d && d < r1+r2)
            cout << 2;
        
        else
            cout << 0;
        cout << endl;   
    }

    return 0;
}
