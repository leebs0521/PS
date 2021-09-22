/*
    BOJ 1929 - 소수 구하기
    url: https://www.acmicpc.net/problem/1929
    Silver 2
    date: 2021.9.22
*/

#include <iostream>
#include <vector>

using namespace std;

int arr[10000001];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int M, N;
    
    cin >> M >> N;
    
    for(int i=2;i<=N;i++)
        arr[i] = i;

    // 에라토스테네스의 체를 통한 소수 판단
    for(int i=2;i<=N;i++){

        //이미 체크된 배수 패스 ex) 6 -> 3의 배수에서 체크
        if(arr[i] == 0)
            continue;
        for(int j=i+i;j<=N;j+=i)
            arr[j]=0;
    }

    for(int i=M;i<=N;i++){
        if(arr[i] != 0)
            cout << arr[i] << "\n";
    }

    return 0;
}

 