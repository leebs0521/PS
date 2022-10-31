/*
    BOJ 1065 - 한수
    url: https://www.acmicpc.net/problem/1065
    Silver 4
    date: 2022. 7. 30
*/

#include <iostream>

#define endl "\n"

using namespace std;
bool IsHansu(int n){
    if(n < 100){
        return true;
    }
    else{
        string str = to_string(n);

        int diff = str[0] - str[1];

        for(int i=1;i<str.length()-1;i++){
            int new_diff = (int)(str[i] - str[i+1]);
            if(new_diff != diff){
                return false;
            }
        }

        return true;
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, cnt = 0;
    bool check[1001]{false, };
    cin >> n;

    for(int i=1; i<=n;i++){
        if(IsHansu(i)){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}