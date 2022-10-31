/*
    BOJ 25304 - 영수증
    url: https://www.acmicpc.net/problem/25304
    Bronze 5
    date: 2022. 8. 6
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int x, n, sum = 0;
    
    cin >> x >> n;

    for(int i=0;i<n;i++){
        int price, p_num;

        cin >> price >> p_num;
        sum += price * p_num;
    }

    if(x == sum){
        cout << "Yes";
    }
    else
        cout << "No";


    return 0;
}