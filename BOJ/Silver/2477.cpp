/*
    BOJ 2477- 참외밭
    url: https://www.acmicpc.net/problem/2477
    Silver 3
    date: 2022. 8. 4
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int k, dir[6], size[6] = {0, };
    int w, h, w1, h1;
    
    w = h = w1 = h1 = 0;
    cin >> k;

    for(int i=0;i<6;i++){
        cin >> dir[i] >> size[i];
    }

    for(int i=0;i<6;i++){
        if(i%2 == 0)
            w = max(w, size[i]);
        else
            h = max(h, size[i]);
    }

    for(int i=0;i<6;i++){
        if(i%2 == 0){
            if(h == size[(i+5)%6] + size[(i+1)%6])
                w1 = size[i];
        }
        else{
            if(w == size[(i+5)%6] + size[(i+1)%6])
                h1 = size[i];
        }
    }

    cout << k*(w*h - w1*h1);

    return 0;
}