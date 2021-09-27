/*
    BOJ 9613 - GCD 합
    url: https://www.acmicpc.net/problem/9613
    Silver 3 
    date: 2021. 9. 27
*/

#include <iostream>

using namespace std;

// 유클리트 호제법을 통한 gcd 구하기
int gcd(int a, int b){
    int temp;

    while(b>0){
        
        temp = a%b;
        a = b;
        b = temp;
    }
    return a;
}

int arr[100];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;

    cin >> t;

    while(t--){
        int n;
        long long sum = 0;
        cin >> n;
        for(int i=0;i<n;i++)
            cin >> arr[i];
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++)
                sum += gcd(arr[i], arr[j]);
        }
        cout << sum << "\n";
    }
    return 0;
}
