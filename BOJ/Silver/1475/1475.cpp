/*
    BOJ 1475 방 번호
    url: https://www.acmicpc.net/problem/1475
    Silver 5
*/

#include <iostream>

using namespace std;

int arr[10];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, i, max = 0;
    
    cin >> n;

    if(n==0){
        cout << 1 << endl;
        return 0;
    }
    // 0 ~ 9 숫자 세기
    while(n>0){
        arr[n%10]++;
        n /= 10;
    }

    // 6과 9는 합쳐서 나누기 2 
    arr[6] = (arr[6] + arr[9] + 1) / 2;
    arr[9] = 0;

    // 0~9 중 가장 높은 숫자 = 필요한 세트 수
    for(i=0;i<10;i++){
        if(arr[i] > max)
            max = arr[i];
    }

    cout << max << endl;
    return 0;
}
