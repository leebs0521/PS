/*
    BOJ 2562 - 최댓값
    url: https://www.acmicpc.net/problem/2562
    Bronze 2
    date: 2021. 9. 23
*/

#include <iostream>

using namespace std;


int arr[9];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int maxIndex = 0;
    for(int i=0;i<9;i++){
        cin >> arr[i];
    }

    for(int i=1;i<9;i++){
        if(arr[maxIndex] < arr[i])
            maxIndex = i;
    }

    cout << arr[maxIndex] << "\n" << maxIndex+1 << "\n";

    return 0;
}