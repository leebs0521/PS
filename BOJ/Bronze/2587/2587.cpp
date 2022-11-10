/*
    BOJ 2587 - 대표값2
    url: https://www.acmicpc.net/problem/2587
    Bronze 2
    date: 2022. 11. 10
*/

#include <iostream>
#include <algorithm>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int arr[5];
    int sum = 0;

    for(int i=0;i<5;i++){
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr+5);
    cout << sum / 5 << endl;
    cout << arr[2];
    return 0;
}