/*
    BOJ 10989 - 수 정렬하기 3
    url: https://www.acmicpc.net/problem/10989
    Silver 5 
    date: 2021. 10. 4
*/

#include <iostream>
#include <algorithm>

#define endl "\n"

using namespace std;

int arr[10001];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;

    cin >> n;

    for(int i=0;i<n;i++){
        int input;
        cin >> input;
        arr[input]++;
    } 

    for(int i = 1 ; i <= 10000; i++)
        for (int j = 0; j < arr[i]; j++)
            cout << i << "\n";
    return 0;
}