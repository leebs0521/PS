/*
    BOJ 3036 - 링
    url: https://www.acmicpc.net/problem/3036
    Silver 4
    date: 2022. 8. 4
*/

#include <iostream>

#define endl "\n"

using namespace std;

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    else{
        return gcd(b, a%b);
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, div, arr[1001];

    cin >> t;
    
    for(int i=0;i<t;i++){
        cin >> arr[i];

        if(i >= 1){
            if(arr[0] > arr[i])
                div = gcd(arr[0], arr[i]);
            else
                div = gcd(arr[i], arr[0]);
            cout  << arr[0]/div << "/" << arr[i]/div << endl;
        }
    }
    return 0;
}