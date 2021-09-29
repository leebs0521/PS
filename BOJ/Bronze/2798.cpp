/*
    BOJ 2798 - 블랙잭
    url: https://www.acmicpc.net/problem/2798
    Bronze 2 
    date: 2021. 9. 29
*/

#include <iostream>

using namespace std;

int arr[101];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m, sum, big = 0;

    cin >> n >> m;

    for(int i=1;i<=n;i++) cin >> arr[i];

    for(int i=1;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
            for(int k=j+1;k<=n;k++){
                sum = arr[i]+arr[j]+arr[k];
                if(sum <= m)
                    big = max(big, sum);
            }
        }
    }

    cout << big;
    return 0;
}