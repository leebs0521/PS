/*
    BOJ 1004 - 어린 왕자
    url: https://www.acmicpc.net/problem/1004
    Silver 3
    date: 2022. 8. 3
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;

    cin >> t;

    while(t--){
        int x1, x2, y1, y2;

        cin >> x1 >> y1 >> x2 >> y2;

        int n, cnt = 0;

        cin >> n;

        for(int i=0;i<n;i++){
            int x, y, r;
            cin >> x >> y >> r;

            if ((x - x1) * (x - x1) + (y - y1) * (y - y1) < r * r) 
				if ((x - x2) * (x - x2) + (y - y2) * (y - y2) > r * r) 
					cnt++;

			if ((x - x1) * (x - x1) + (y - y1) * (y - y1) > r * r)
				if ((x - x2) * (x - x2) + (y - y2) * (y - y2) < r * r)
					cnt++;

        }
        cout << cnt << endl;
    }
    
    return 0;
}