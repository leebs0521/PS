/*
    BOJ 3052 - 나머지
    url: https://www.acmicpc.net/problem/3052
    Bronze 2
    date: 2021. 9. 23
*/

#include <iostream>

using namespace std;

int arr[42];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n = 10, cnt = 0;

    while(n--){
        int a;
        cin >> a;
        arr[a%42]++;
    }
    for(int i=0;i<42;i++){
        if(arr[i] != 0)
            cnt++;
    }

    cout << cnt << "\n";
    
    return 0;
}