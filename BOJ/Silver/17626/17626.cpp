/*
    BOJ 17626 - Four Squares
    url: https://www.acmicpc.net/problem/17626
    Silver 4 
    date: 2022.3.16
*/

#include <iostream>

#define endl "\n"

using namespace std;
int ans[50001];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N;
    cin >> N;

    for(int i=1;i*i<=N;i++)
        ans[i*i] = 1;
    
    for(int i=1;i<=N;i++){
        if(ans[i] == 1)
            continue;
        else{
            ans[i] = ans[1] + ans[i-1];
            for(int j=2; j*j<i-1;j++){
                ans[i] = min(ans[i], (ans[j*j] + ans[i-j*j]));
            }
        }
    }
    cout << ans[N] << endl;
    return 0;
}