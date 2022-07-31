/*
    BOJ 11729 - 하노이 탑 순서
    url: https://www.acmicpc.net/problem/11729
    Silver 1
    date: 2022. 7. 31
*/

#include <iostream>

#define endl "\n"

using namespace std;

void hanoi(int n, int start, int end, int middle){
    if(n == 1){
        cout << start << " " << end << endl;
    }
    else{
        hanoi(n-1, start, middle, end);
        hanoi(1, start, end, middle);
        hanoi(n-1, middle, end, start);
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;

    cin >> n;

    cout << (1 << n)-1 << endl;
    hanoi(n, 1, 3, 2);
    
    return 0;
}