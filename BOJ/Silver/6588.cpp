/*
    BOJ 6588 - 골드바흐의 추측
    url: https://www.acmicpc.net/problem/6588
    Silver 1
    date: 2021.9.22
*/

#include <iostream>
#define MAX 1000001
using namespace std;

int arr[1000001];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    bool prove;

    for(int i=2;i<MAX;i++)
        arr[i] = i;

    // 에라토스테네스의 체를 통한 소수 판단
    for(int i=2;i<MAX;i++){

        //이미 체크된 배수 패스 ex) 6 -> 3의 배수에서 체크
        if(arr[i] == 0)
            continue;
        for(int j=i+i;j<MAX;j+=i)
            arr[j]=0;
    }


    while(1){

        cin >> n;

        if(n==0)
            break;
        
        int a, b;
        for(int i=1; i*2+1<n;i++){
            a = (2*i)+1;
            b = n - a;
            if(arr[b] !=0 && arr[a] !=0){
                cout << n << " = " << a << " + " << b << "\n";
                prove = true;
                break;
            }
        }
        if(!prove)
            cout << "Goldbach's conjecture is wrong.\n";
        
    }
    return 0;
}