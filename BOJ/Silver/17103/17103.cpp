/*
    BOJ 17103 - 골드바흐 파티션
    url: https://www.acmicpc.net/problem/17103
    Silver 2 
    date: 2021. 9. 28
*/

#include <iostream>

#define MAX 1000001
int arr[MAX];
using namespace std;

// 에라토스테네스의 체를 통한 소수 판단
void Prime(){
    arr[0] = 1;
    arr[1] = 1;
    for(int i=2;i<MAX;i++){
        if(arr[i] == 1)
            continue;
        for(int j=2*i;j<MAX;j+=i)
            arr[j] = 1;
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;

    cin >> t;

    Prime();
    while(t--){
        int n, cnt = 0;

        cin >> n;

        // 앞 뒤 순서만 바뀐 순서 쌍은 같은 것이므로 n/2 까지만 판단
        for(int i=2;i<=n/2;i++){
            int j = n-i;
            if(arr[i] == 0 && arr[j] == 0)
                cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}