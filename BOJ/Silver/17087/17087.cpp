/*
    BOJ 17087 - 숨바꼭질 6
    url: https://www.acmicpc.net/problem/17087
    Silver 1 
    date: 2021. 9. 27
*/

#include <iostream>

using namespace std;

// 유클리드 호제법을 이용한 gcd
int fgcd(int a, int b){
    int temp;

    while(b>0){
        
        temp = a%b;
        a = b;
        b = temp;
    }
    return a;
}
int arr[100001];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, s, ans;

    cin >> n >> s;

    for(int i=0;i<n;i++)
        cin >> arr[i];
    
    // 동생이 한명이므로 d는 동생 위치 - 수빈의 위치
    if(n==1){
        cout << abs(arr[0] - s);
        return 0;
    }

    // 배열에 수빈과 동생들과의 거리 저장
    for(int i=0;i<n;i++)
        arr[i] = abs(arr[i] - s);

    // 최대 d는 거리의 최대 공약수
    ans = arr[0];
    for(int i=1;i<n;i++)
        ans = fgcd(ans,arr[i]);

    cout << ans << "\n";
    return 0;
}