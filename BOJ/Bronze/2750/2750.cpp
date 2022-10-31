/*
    BOJ 2750 - 수 정렬하기
    url: https://www.acmicpc.net/problem/2750
    Bronze 2
    date: 2022. 8. 1
*/

#include <iostream>
#include <algorithm>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, arr[1000];

    cin >> n;

    for(int i=0;i<n;i++)    cin >> arr[i];

    sort(arr, arr+n);

    for(int i=0;i<n;i++)
        cout << arr[i] << endl;
    return 0;
}