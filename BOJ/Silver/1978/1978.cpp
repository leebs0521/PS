/*
    BOJ 1978 - 소수 찾기
    url: https://www.acmicpc.net/problem/1978
    Silver 5
    date: 2021.9.22 
*/

#include <iostream>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, arr[1001]={0,}, cnt = 0;

    cin >> n;
    // 2 ~ 1000 배열 대입
    for(int i=2;i<1001;i++)
        arr[i] = i;


    // 에라토스테네스의 체를 통한 소수 판단
    for(int i=2;i<1001;i++){
        //이미 체크된 배수 패스 ex) 6 -> 3의 배수에서 체크
        if(arr[i] == 0)
            continue;
        for(int j=i+i;j<1001;j+=i)
            arr[j]=0;
    }

    while(n--){
        int input;
        cin >> input;
        if(arr[input] != 0)
            cnt++;
    }
    cout << cnt << "\n";
    return 0;
}