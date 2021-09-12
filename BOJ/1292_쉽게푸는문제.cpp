/*
    BOJ 1292 - 쉽게 푸는 문제
    Silver 5
*/

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int arr[1001], start, end, sum = 0, cnt = 1, num_cnt = 1;

    cin >> start >> end;

    for(int i = 1; i<=end; i++){
        arr[i] = cnt;
        if(cnt == num_cnt){
            cnt++;
            num_cnt = 1;
        }
        else    num_cnt++;
    }
    for(int i = start; i<=end;i++)
        sum+= arr[i];
    
    cout << sum << endl;

    return 0;
}