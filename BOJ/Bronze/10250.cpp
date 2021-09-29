/*
    BOJ 10250 - ACM 호텔
    url: https://www.acmicpc.net/problem/10250
    Bronze 3 
    date: 2021. 9. 29
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;

    cin >> t;
    while(t--){
        int h, w, n;

        cin >> h >> w >> n;

        int h1, w1, room;

        h1 = n%h;
        w1 = n/h;

        if(h1>0)
            w1++;
        else
            h1 = h;
        
        cout << h1*100 + w1 << endl;
        
    }
    return 0;
}