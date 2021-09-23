/*
    BOJ 1546 - 평균
    url: https://www.acmicpc.net/problem/1546
    Bronze 1
    date: 2021. 9. 23
*/

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    double sum = 0, max = 0, arr[1000];

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i] > max)
            max = arr[i];
    }

    for(int i=0;i<n;i++){
        arr[i] = arr[i]/max*100;   
        sum += arr[i];
    }

    cout << sum/n << "\n";

    return 0;
}